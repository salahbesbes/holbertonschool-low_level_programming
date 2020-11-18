#include "header.h"
#include <stdlib.h>
#include <string.h>

/**
* _delete_env - delete one variable from the array (we put the found variable
* at the last postion and since **env is null terminated it wont bet seen for
* any other changes)
* @env: poiter to the environ array of string
* @Name: var name to delete
*
* Return: 0
* Error: -1
*/

int _delete_env(char **env, char *Name)
{
	int i, found = 0, j = 0, k = 0;
	char *str;

	i = 0;
	while (env[i])
	{
		found = checkName(Name, env[i], 0);
		if (found)
		{
			for (j = i + 1; env[i]; j++, i++)
				env[i] = env[j];
			break;
		}
		i++;
	}
	return (0);
}

/**
* _setenv - take the name and the value of the Variable u want to add to the
* environment variables, check if u want to overwrite it if it exist.
* @env: poiter to an array of strings
* @Name: name of the variable
* @value: value to add/apdate
* @overwrite: overwrite existing value 1 yes 0 no
* @GC: pointer to garbage collector
* Return: 0
* Error: -1
*/

int _setenv(char **env, char *Name, char *value, int overwrite, gc *GC)
{
	int i = 0, found = 0;

	while (env[i])
	{
		/* we check if the Name exit and if we found '=' */
		found = checkName(Name, env[i], '=');
		if (found == 2)
			return (-1);
		if (found == 1)
		{
			if (overwrite)
			{
				env[i] = _strConcatEnv(Name, value, '=', GC);
				return (0);
			}
		}
		i++;
	}

	env[i] = _strConcatEnv(Name, value, '=', GC);
	env[i + 1] = NULL;
	return (0);
}



