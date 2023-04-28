#include "andy.h"

/**
*main - Creates 5 child processes to execute "ls -l /tmp".
*
* Return: 0 on success, 1 on error.
*/
int main(void)
{
	pid_t child_pid;
	char *filename = "/bin/ls";
	char *newargv[] = { "-l", "/tmp", NULL };
	char *newenviron[] = { NULL };
	int status = 0;
	unsigned int i;

	i = 0;
	while (i < 5)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			execve(filename, newargv, newenviron);
		}	wait(&status);
		i++;
	}
	return (0);
}
