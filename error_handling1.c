#include "monty.h"

/**
 * print_open_error - Prints an error if the file cannot be opened.
 * @filename: Name of the file that couldn't be opened.
 */
void print_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * print_malloc_error - Prints an error if malloc fails.
 */
void print_malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * print_int_error - Prints an error for invalid push usage.
 * @line_number: Line number where the error occurred.
 */
void print_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_pint_error - Prints an error if pint fails (e.g., stack is empty).
 * @line_number: Line number where the error occurred.
 */
void print_pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_pop_error - Prints an error if pop fails (e.g., stack is empty).
 * @line_number: Line number where the error occurred.
 */
void print_pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
