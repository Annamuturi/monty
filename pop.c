#include "alx_monty.h"

/**
 * pop - pops top element
 *
 * @stack: pointer to list
 * @line_number: number of line where command was found
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	/*Check if the stack is empty*/
	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(command_t.instructions);
		free(command_t.line);
		fclose(command_t.store_check);
		exit(EXIT_FAILURE);
	}
	/* Move the stack pointer to the next element */
	*stack = (*stack)->next;
	/* Free the memory of the popped element */
	free(tmp);
}
