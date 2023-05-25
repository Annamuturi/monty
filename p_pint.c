#include "alx_monty.h"

/**
 * pint - prints top element
 *
 * @stack: pointer to list
 * @line_number: number of line where command was found
 */

void pint(stack_t **stack, unsigned int line_number)
{
	/* Check if the stack is empty or if the stack pointer is NULL */
	if (!*stack || !stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(command_t.instructions);
		free(command_t.line);
		fclose(command_t.store_check);
		exit(EXIT_FAILURE);
	}
	/* Print the value of the top element of the stack */
	printf("%d\n", (*stack)->n);
}
