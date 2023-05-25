#include "alx_monty.h"

/**
 * pop - pops top element
 *
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(command_t.instructions);
		free(command_t.line);
		fclose(command_t.store_check);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	free(temp);
}
