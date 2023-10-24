#include "monty.h"

/**
 * free_stack - Frees a stack.
 * @stack: Double pointer to the top of the stack.
 */
void free_stack(stack_t **stack)
{
	stack_t *current;

	while (*stack)
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
}
