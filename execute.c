#include "monty.h"

/**
 * execute - Description of what the execute function does.
 * @content: Description of the content parameter.
 * @stack: Description of the stack parameter.
 * @line_number: Description of the line_number parameter.
 * @file: Description of the file parameter.
 *
 * Return: Describe the return value (if any).
 */
void execute(char *content, stack_t **stack,
		unsigned int line_number, FILE *file)
{
	instruction_t op_funcs[] = {
		{"push", push}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"add", add},
		{"nop", nop}, {"sub", sub}, {"div", div_opcode},
		{"mul", mul}, {"mod", mod}, {"pchar", pchar},
		{"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},
		{NULL, NULL}
	};

	int i = 0;
	char *opcode = strtok(content, " \t\n");

	if (opcode == NULL || opcode[0] == '#')
		return;

	while (op_funcs[i].opcode != NULL)
	{
		if (strcmp(opcode, op_funcs[i].opcode) == 0)
		{
			bus.content = strtok(NULL, " \t\n");
			op_funcs[i].f(stack, line_number);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	free_stack(stack);
	fclose(file);
	exit(EXIT_FAILURE);
}
