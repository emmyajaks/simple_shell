#include "shell.h"
/**
 * is_positive_number - Check if a string represents a positive number.
 * @str: The input string to be checked.
 * Return: 1 if the string is a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
	int m;

	if (!str)
		return (0);

	for (m = 0; str[m]; m++)
	{
		if (str[m] < '0' || str[m] > '9')
			return (0);
	}
	return (1);
}

/**
 * _atoi - Convert a string to an integer.
 * @str: The input string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *str)
{
	int m, num = 0;

	for (m = 0; str[m]; m++)
	{
		num *= 10;
		num += (str[m] - '0');
	}
	return (num);
}
