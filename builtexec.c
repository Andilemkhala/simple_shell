#include "andyschool.h"
/**
**builtexec - executes the built in functions
**@tokens: arguments being passed
**Return: tokens
**/
int builtin_execute(char **tokens)
{
	int status;
	unsigned int length;
	unsigned int num;
	unsigned int mandy;

	built_s builtin[] = {
		{"exit", shell_exit},
		{"env", shell_env},
		{NULL, NULL}
	};

	if (tokens[0] == NULL)
		return (1);

	length = _strlen(tokens[0]);

	num = shell_num_builtins(builtin);
	for (mandy = 0; mandy < num; mandy++)
	{
		if (_strcmp(tokens[0], builtin[i].name, length) == 0)
		{
			status = (builtin[mandy].p)();
			return (status);
		}
	}
	return (1);
}

/**
**shell_num_built - this check num built-ins
**@builtin: takes the builtin to be counted
**Return: num of built-ins
**/

int shell_num_builtins(built_s builtin[])
{
	unsigned int mandy;

	mandy = 0;
	while (builtin[mandy].name != NULL)
		mandy++;

	return (mandy);
}
