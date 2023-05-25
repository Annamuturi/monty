#include "alx_monty.h"
/**
 * push - pushes new node to stack
 *
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */
void push(stack_t **stack, unsigned int line_number)
{
	int command_converted = 0;

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
		command_converted = atoi(command_t.number);
		add_dnodeint(stack, command_converted);
	}
}
