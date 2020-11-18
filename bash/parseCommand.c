#include "header.h"
#include <stdio.h>
#include <string.h>


/**
* _trim - delete all space and other chars after every word
* (by delete i mean move curser)
* @str: adress of a pointer
*
* Return: void
void _trim(char **str)
{
	if ((**str >= 'A' && **str <= 'Z') || (**str >= 'a' && **str <= 'z'))
		return;
	if (**str == '\0' || !*str)
		return;
	if (**str == ' ' || **str == '\t' || **str == '\n')
		(*str)++;
	_trim(str);
}
*/

/**
* _strparseSep2 - take a long string and split it into multiple strings using the
* delimitaion string (any char of the sep str) if found char if we found
* @buf: long string
* @sep: delimitaion string
* Return: first token found (string before sep)
*/

char *_strparseSep2(char **buf, char *sep)
{
	int i = 0, j = 0;
	char *ptr;
	int valAnd = '&' + '&', valOR = '|' + '|';
	int curAndNext = 0;

	//_trim(buf);
	if (!*buf || **buf == '\0')
	{
		*buf = NULL;
		return (NULL);
	}
	if (!sep || *sep == '\0')
		return (*buf);
	ptr = *buf;

	while (**buf)
	{
		curAndNext = **buf + *(*buf + 1);
		if (curAndNext == valAnd || curAndNext == valOR)
		{
			**buf = '\0';
			(*buf) = *buf + 2; /* dont stay on index of ' ' */
			//_trim(buf); /* next sentense is trimmed */
			return (ptr); /* end loop by sending char* */
		}
	(*buf)++;
	}
	/* in the las word wwe wont found any sep we return what we have*/
	return (ptr);
}



/**
* _strparse - take a long string and split it into multiple strings using the
* delimitaion string (any char of the sep str) if found char if we found
* @buf: long string
* @sep: delimitaion string
* Return: first token found (string before sep)
*/

char *_strparse(char **buf, char *sep)
{
	int i = 0, j = 0;
	char *ptr;

	//_trim(buf);
	if (!*buf || **buf == '\0')
	{
		*buf = NULL;
		return (NULL);
	}
	if (!sep || *sep == '\0')
		return (*buf);
	ptr = *buf;

	while (**buf)
	{
		for (j = 0; sep[j]; j++)
		{
			if (**buf == sep[j])
			{
				**buf = '\0';
				(*buf)++; /* dont stay on index of ' ' */
				//_trim(buf); /* next sentense is trimmed */
				return (ptr); /* end loop by sending char* */
			}
		}
		(*buf)++;
	}
	/* in the las word wwe wont found any sep we return what we have*/
	return (ptr);
}

/**
 * parseSpecialChar - it take and array of char and an array of string as args;
 * parse the first arg into smoller token and fill the second.
 * take the return value of the fun _strparse save the words
 * obtained into a 2D if the word length returned from the parsing func is 0
 * then we wont add it to the array of string (we skip it)
 *
 * @str: array of char 
 * @parsed: 2D array of char*
 *
 * Return: Void
 */
void parseSpecialChar(char *str, char **parsed, char *sep, char *sep2)
{
	int i, j = 0, k = 0;
	char *ptr;
	char *res[500];
	char *words[500];
	for (i = 0; 1; i++)
	{
		res[i] = _strparse(&str, sep);

		/* if sep2 is null we want to fill parsed not temparaty res */
		if (!sep2)
			parsed[i] = res[i];
		if (res[i] == NULL)
			break;
		/*
		if (strlen(res[i]) == 0)
			i--;
		*/
		/* if sep2 is null we dont want to access this loop */
		while (res[i][0] != '\0' && res[i] && sep2)
		{
			/* it can reteurn "" and if we treat it we will have 
			 * parsed[j] == NULL we dont want that so we put
			 * condition to not enter this while if we found "" */
			parsed[j] = _strparseSep2(&res[i], "&&||");
			/*
			while (parsed[j][0] != '\0' && parsed[j])
			{
				words[k] = _strparse(&parsed[j], " ");
				if (strlen(words[k]) == 0)
					k--;
				k++;
			}
			*/
			/*
			if (strlen(parsed[j]) == 0)
				j--;
				*/
			j++;
		}

	}

	i = 0;
	while (words[i])
	{
		printf(" words[i] = %s\n", words[i]);
		i++;
	}
}

/**
* delete_comment - get rid of all text after '#', take only whats before
* @str: pointer to the first token
*
* Return: char*
*/

char *delete_comment(char *str)
{

	char *ptr = NULL;

	//_trim(&str);
	ptr = _strparse(&str, "#");

	return (ptr);
}

