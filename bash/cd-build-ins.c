#include "header.h"
#include <stdlib.h>



/**
* change_directory - change current directory and update the envi variable, and
* handle cd -
* @str: path
* @env: pointer to the array of str
* @GC: pointer to gc
*
* Return: 0
* Error: -1
*/

int change_directory(char *str, char **env, gc *GC)
{

	char newPWD[1000];
	char oldPWD[1000];
	int i = 0, err;

	getcwd(oldPWD, 1000);

	err = chdir(str);
	if (err < 0)
	{
		printf(" error = %d\n", err);
		return (-1);
	}
	getcwd(newPWD, 1000);
	_setenv(env, "PWD", newPWD, 1, GC);
	_setenv(env, "OLDPWD", oldPWD, 1, GC);


	printf(" newPWD = %s\n", newPWD);
	printf(" oldPWD = %s\n", oldPWD);

	return (0);
}






/**
* main - treat cd
* @argc: nb of arguments
* @argv: arguments
* @env: environment vars
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[], char *env[])
{

	gc GC;
	char *ptr = NULL;
	char *home = NULL, *homeVal = NULL;
	int found;

	GC.str_coll = malloc(sizeof(char *) * 500);
	GC.str_coll[0] = NULL;
	GC.length = 0;

	homeVal = _getenv("HOME", env);
	/* dont want any char in between and dont want allocation */
	home = _strConcatEnv("/", homeVal, 0, &GC);
	ptr =  argc == 2 ? _getenv("HOME", env) : argv[2];

	found = checkName("-", ptr, 0);
	if (found == 1)
		ptr = _getenv("OLDPWD", env);
	printf("ptr  = %s\n", ptr);
	change_directory(ptr, env, &GC);

	free_Garbage_coll(&GC);
	return (0);
}
