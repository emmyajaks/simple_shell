#include "shell.h"
/**
 * main - Entry point for the simple shell
 * @ac: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: Always returns 0 (success).
 */
int main(int ac, char **argv)
{
	char *line = NULL, **commnd = NULL;
	int status = 0, idx = 0;
	(void)ac;

	while (1)
	{
		line = read_line();
		if (line == NULL) /* Reached EOF (Ctrl + D) */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		idx++;
		commnd = tokenizer(line);
		if (!commnd)
			continue;

		if (is_builtin(commnd[0]))
			handle_builtin(commnd, argv, &status, idx);
		else
			status = _execute(commnd, argv, idx);
	}
}
