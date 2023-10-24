#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!(*stack) || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}

/**
 * nop - Doesn't do anything.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

/**
 * sub - Subtracts the top element from the second top element of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack);
	(*stack)->next->n -= (*stack)->n;
	(*stack) = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}

/**
 * div_opcode - Divides the second top element by the top element of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void div_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack);
	(*stack)->next->n /= (*stack)->n;
	(*stack) = (*stack)->next;
	free(temp);
	(*stack)->prev = NULL;
}

/**
 * mul - Multiplies the top two elements of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: The line number in the bytecode file.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	(void)stack;
(void)line_number;
}
