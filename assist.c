#include "monty.h"

/**
 * check_if_number - Check if a string represents a number.
 * @str: The string to check.
 *
 * Return: 1 if the string represents a number, 0 otherwise.
 */
int check_if_number(char *str)
{
	if (!str)
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
