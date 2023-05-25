#include "alx_monty.h"

/**
 * push - pushes new node to stack
 *
 * @stack: pointer to list
 * @line_number: number of line where command was found
 */
void push(stack_t **stack, unsigned int line_number)
{
	int command_converted = 0;

	/* Check if the argument is a valid integer */
	if (isdigit_str(command_t.number) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(command_t.instructions);
		free(command_t.line);
		fclose(command_t.store_check);
		exit(EXIT_FAILURE);
	}
	else
	{
		/* Convert the argument to an integer */
		command_converted = atoi(command_t.number);
		/*  Add the converted value as a new node to the stack */
		add_dnodeint(stack, command_converted);
	}
}
