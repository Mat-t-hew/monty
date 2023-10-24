#include "monty.h"

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		print_open_error(argv[1]);
	}

	content = malloc(1024);
	if (!content)
	{
		fclose(file);
		exit(EXIT_FAILURE);
	}

	while (fgets(content, 1024, file) != NULL)
	{
		counter++;
		execute(content, &stack, counter, file);
	}
	/* Add function to free the stack */
	fclose(file);
	return (0);
}
