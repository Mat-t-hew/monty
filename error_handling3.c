#include "monty.h"

/**
 * print_mul_error - Description of what the print_mul_error function does.
 * @line_number: Description of the line_number parameter.
 */
void print_mul_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_mod_error - Prints error when stack is short for modulus operation.
 * @line_number: Line number where the error occurred.
 */
void print_mod_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_char_error - Prints error when the value is out of range for a char.
 * @line_number: Line number where the error occurred.
 */
void print_char_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * print_pchar_stack_error - Prints error when stack empty for pchar opcode.
 * @line_number: Line number where the error occurred.
 */
void print_pchar_stack_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
