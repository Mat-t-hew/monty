#include "monty.h"

/**
 * print_swap_error - Prints an error if the stack is too short to swap.
 * @line_number: Line number where the error occurred.
 */
void print_swap_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_add_error - Prints an error if the stack is too short to add.
 * @line_number: Line number where the error occurred.
 */
void print_add_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_sub_error - Prints an error if the stack is too short to subtract.
 * @line_number: Line number where the error occurred.
 */
void print_sub_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_div_error - Prints an error if the stack is too short to divide.
 * @line_number: Line number where the error occurred.
 */
void print_div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_div_zero_error - Prints an error when division by zero is attempted.
 * @line_number: Line number where the error occurred.
 */
void print_div_zero_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	exit(EXIT_FAILURE);
}
