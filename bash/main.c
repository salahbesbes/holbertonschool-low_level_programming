#include "header.h"
#include <stdio.h>

/**
* main - main for bash
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[], char *env[])
{
	
	List_path *header = NULL;
	unsigned int i;
	extern char **environ;
	char *Dir[] = {
		"XDG_GREETER_DATA_DIR=/var/lib/lightdm-data/julien","SESSION=ubuntu","PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin","LESSCLOSE=/usr/bin/lesspipe %s %s","_=/usr/bin/printenv","MANDATORY_PATH=/usr/share/gconf/ubuntu.mandatory.path","USER=julien","PWD=/home/julien/c/shell_course", NULL
	};
	char *str;
	char *commands[200];
	//str = _getenv("PATH", Dir);
	



	char test[] = " ls -l \t&& echo salah \0 || `` \\ \n  hhhhhhhhhh";
	i = 0;
	parseSpecialChar(test, commands);
	i = 0;
	while (commands[i])
	{
		printf(" cammands[i] = %s\n", commands[i]);
		i++;
	}
	printf(" cammands[i] = %s\n", commands[i]);
	/*
*/
	
	return (0);
}
