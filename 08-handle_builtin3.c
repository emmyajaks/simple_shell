#include "shell.h"
/**
 * print_env - Handle the 'env' built-in shell command.
 * @commnd: The command and its arguments.
 * @status: The exit status to update.
 */
void print_env(char **commnd, int *status)
{
	int m;

	for (m = 0; environ[m]; m++)
	{
		write(STDOUT_FILENO, environ[m], _strlen(environ[m]));
		write(STDOUT_FILENO, "\n", 1);
	}
	freearray2D(commnd);
	(*status) = 0;
}
