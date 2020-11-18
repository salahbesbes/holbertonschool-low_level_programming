

#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* X - 
* @a: 
*
* Return:
*/

char *_trim(char **str, gc *GC)
{
	char trimed[500], *vide;
	int i = 0, len = 0;

	while (**str)
	{
		if (**str == ' ')
		{
			vide = *str + 1;
			while (*vide == ' ')
			{
				vide++;
				(*str)++;
			}
		}
		trimed[i] = **str;
		i++;
		(*str)++;
	}
	trimed[i] = '\0';
	len = strlen(trimed);
	if (trimed[len - 1] == ' ')
		trimed[len - 1] = '\0';
	if (trimed[0] == ' ')
	{
		i = 0;
		while (trimed[i])
		{
			trimed[i] = trimed[i + 1];
			i++;
		}
	}
	return (_copAlloc(trimed, GC));
}


/**
* X - 
* @a: 
*
* Return:
*/

cmd_t *create_struct(char **line)
{
	cmd_t *cmd = malloc(sizeof(cmd_t));
	char *com, *args, *ptr;
	int i, valAND = '&' + '&', valOR = '|' + '|';
	int curAndnext;

	cmd->args = NULL;
	cmd->command = NULL;
	cmd->next_oper = '\0';
	if (!line || **line == '\0')
		return (cmd);

	com = args = ptr = *line;
	while (**line)
	{
		curAndnext = **line + *(*line + 1);
		if (curAndnext == valAND || curAndnext == valOR)
		{
			cmd->next_oper = **line;
			**line = '\0';
			*line = *line + 3;
			while (*ptr != ' ')
				ptr++;
			*ptr = '\0';
			ptr ++;
			cmd->command = _copAlloc(com, 0);
			cmd->args = _copAlloc(ptr, 0);
			return (cmd);
		}
		(*line)++;
	}
	cmd->next_oper = '\0';
	cmd->command = _copAlloc(_strparse(&ptr, " "), 0);
	cmd->args = _copAlloc(ptr, 0);
	return (cmd);
}
/**
* X - 
* @a: 
*
* Return:n
*/

cmd_t **parseLine(char *line)
{

	gc GC;
	cmd_t **result = malloc(500);
	cmd_t *test;
	char *ptr;
	int i = 0, len = 0;
	

	GC.str_coll = malloc(sizeof(char * ) * 500);
	GC.length = 0;
	ptr = _trim(&line , &GC);
	len = 0;
	while (len < 10)
	{
		result[len] = create_struct(&ptr);

		if (!result[len]->command)
			break;
		len++;
	}

	i = 0;
	while (i < len)
	{
		//printf("c= %s, a=%s, o=%c\n",result[i]->command, result[i]->args, result[i]->next_oper );

		if (!result[i]->command)
			break;
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (!result[i]->command)
			break;
		free(result[i]->args);
		free(result[i]->command);
		free(result[i]);
		i++;

	}
	free(result[i]);
	free(result);
	free_Garbage_coll(&GC);
	/*
 * */

	return (result);
}

/**
* main - 
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	char *str = " ls -   l     ||       echo      sh        ";
	
	char *ptr;

	parseLine(str);

	//printf(" after =%s\n",ptr);
	return (0);
}
