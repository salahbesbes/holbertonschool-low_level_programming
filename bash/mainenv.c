#include "header.h"
#include <stdlib.h>
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
	gc GC;
	//extern char **environ;
	int i = 0;
	char *Dir[200] = {
		"XDG_GREETER_DATA_DIR=/var/lib/lightdm-data/julien","SESSION=ubuntu","PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin","LESSCLOSE=/usr/bin/lesspipe %s %s","_=/usr/bin/printenv","MANDATORY_PATH=/usr/share/gconf/ubuntu.mandatory.path","USER=julien","PWD=/home/julien/c/shell_course", NULL
	};
	GC.str_coll = malloc(sizeof(char *) * 500);
	GC.str_coll[0] = NULL;
	GC.length = 0;

	_setenv(env, "0", "k", 1, &GC);
	_setenv(env, "2", "1", 1, &GC);
   _setenv(env, "1=", "1", 1, &GC);
   /*
	_setenv(env, "3=", "k", 1, &GC);
	*/
	printf("get  = %s\n", _getenv("1=", env));
	printf("**********************************\n");
	i = 74;
	while (env[i])
	{

		printf("%s\n", env[i]);
		i++;
	}
	char *salah;
	salah = _copAlloc(NULL, NULL);
	
	/*
	char *ptr1 = malloc(7);
	char *ptr2 = malloc(7);
	char *ptr3 = malloc(7);
	char *ptr4 = malloc(7);
	char *ptr5 = malloc(7);

	for ( i = 0; i < 5; i++)
	{
		ptr1[i] = 'a';
		ptr2[i] = 'b';
		ptr3[i] = 'c';
		ptr4[i] = 'c';
		ptr5[i] = 'c';
	}
	ptr1[i] ='\0';
	ptr2[i] = '\0';
	ptr3[i] = '\0';
	ptr4[i] = '\0';
	ptr5[i] = '\0';
	
	_insertTo_GC(&GC, ptr1, 6);
	_insertTo_GC(&GC, ptr2, 6);
	_insertTo_GC(&GC, ptr3, 6);
	_insertTo_GC(&GC, ptr4, 6);
	_insertTo_GC(&GC, ptr5, 6);
	while ( i < GC.length)
	{
		printf(" GC = %s\n", GC.str_coll[i]);
		i++;
	}

*/
	free_Garbage_coll(&GC);
}
