#include "header.h"

/**
* checkName - check if the Name contain sp char if it does return 2 then check
* if the name sent exist in the ARG (at the start of ARG) if it does return 1
* if it doesnt exist return 0
*
* @Name: name of the env var
* @ARG: the full path of the var env
* @ch: pass 0 if we dont want to search for sp char (if found return 2)
* Return: 1 on found / 0 not found / 2 found sp char
* Error: 0
*/

int checkName(char *Name, char *ARG, char ch)
{
	int i, j, found = 0;

	for (i = 0; Name[i]; i++)
		if (Name[i] == ch)
			return (2);
	if (ARG[0] && ARG[0] == Name[0])
	{
		for (i = 0; Name[i]; i++)
		{
			for (j = 0; ARG[j] && ARG[j] != '='; j++)
			{
				if (ARG[j] == Name[i + j])
					found = 1;
				else
				{
					found = 0;
					break;
				}
			}
			if (found)
				break;
		}
	}
	if (found)
		return (1);
	else
		return (0);
}

/**
* extractValue - send a pointer to the value of the env var (every thing after
* the '=')
* @Name: var name
* @STR: full path
* Return: pointer to the value of env var
*/

char *extractValue(char *Name, char *STR)
{
	char *ptr = NULL;
	int i = 0;

	ptr = STR;
	for (i = 0; STR[i]; i++)
	{
		if (STR[i] == '=')
		{
			i++;
			ptr += i;
		}
	}
	return (ptr);
}
/**
 * _getenv - loop in the env array and return the value of the env name given
 * if it is found else return NULL
 * @name: str
 * @env: pointer to array of string
 *
 * Return: pointer to the beginning of the located substring,
 *	or NULL if the substring is not found.
 */
char *_getenv(char *name, char **env)
{
	int found = 0, i = 0;

	while (env[i])
	{
		found = checkName(env[i], name, 0);
		if (found)
		{
			return (extractValue(name, env[i]));
		}
		i++;
	}
	return (NULL);
}
