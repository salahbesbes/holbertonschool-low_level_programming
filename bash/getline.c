#include "header.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
* main - 
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[], char *env[])
{
	/*
	pid_t id;
	int  i = 0, status = 0;
	char *ar[] = {"/bin/ls", "-l", "/usr", NULL};
	char *envArg[] = {NULL};
	
	while (i < 5)
	{
		exit(98);
		id = fork();
		if (id == -1)
			perror("error ");
		else if (id == 0)
		{
			sleep(2);
			exit(98);
			//execve(ar[0], ac, NULL);
		}
		else 
		{
			waitpid(id, &status, 0);
			i++;
			printf(" child exit with status %d \n", status);
			printf(" leasable status  = %d\n", WEXITSTATUS(status));

		}
	}
*/
	/*
	pid_t id;
	char *str = NULL;
	int status, len;
	size_t a = 0;
	char *ar[] = {NULL, "./tmp", NULL};

	getline(&str, &a, stdin);
	id = fork();
	len = strlen(str);
	str[len - 1] = '\0';
	ar[0] = str;
	if (id == 0)
	{
		printf("%s\n", ar[0]);
		execve(ar[0], ar, NULL);
	}
	else 
	{
		wait(NULL);
	}

	pid_t id;
	int status, i, len;
	char *str = NULL, *token = NULL;
	size_t a = 0;
	getline(&str, &a, stdin);
	len = strlen(str);
	str[len - 1] = '\0';
	char *ar[10] = {"./search"};

	token = strtok(str, " ");
	ar[1] = token;
	i = 2;

		
	while (token)
	{
		token = strtok(NULL, " ");
		ar[i] = token;
		i++;
	}

	id = fork();
	if (id == 0)
	{
		execve("./search", ar, NULL);
	}
	else 
	{
		wait(NULL);
	}
	*/
	List_path *header = NULL;
	unsigned int i;
	extern char **environ;
	char *Dir[] = {
		"XDG_GREETER_DATA_DIR=/var/lib/lightdm-data/julien","SESSION=ubuntu","PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin","LESSCLOSE=/usr/bin/lesspipe %s %s","_=/usr/bin/printenv","MANDATORY_PATH=/usr/share/gconf/ubuntu.mandatory.path","USER=julien","PWD=/home/julien/c/shell_course", NULL
	};
	char *str, *salah;

	str = _getenv("PATH", Dir);
	salah = "salah:besbes:wael";
	i = 0;
	while (Dir[i])
	{
		header = addToEnd(&header, Dir[i]);
		i++;
	}
	
	printList(header);
	printf("---------------------------------\n");
	deleteNode("PATH", &header);
	addNode("PATH", "hloo", &header);
	printList(header);
	printf("---------------------------------\n");
	addNode("_", "again ", &header);
	printList(header);
	return (0);
}
