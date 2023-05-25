#include "alx_monty.h"

/**
 * pchar - prints the char at the top of the stack
 *
 * @stack: pointer to list
 * @line_number: number of line where command was found
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	/* Check if the stack is empty */

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		frees_struct(stack);
	}
	/*Check if the value at the top of the stack is within the ASCII range*/
	if ((*stack)->n > 31 && (*stack)->n < 127)
	{
		putchar((*stack)->n);
		putchar('\n');
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		frees_struct(stack);
	}
}
