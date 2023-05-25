#include "alx_monty.h"

/**
 * pint - prints top element
 *
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free(command_t.instructions);
		free(command_t.line);
		fclose(command_t.store_check);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
