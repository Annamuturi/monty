#include "alx_monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 *
 * @stack: pointer to list
 * @line_number: number of line where command was found
*/

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	(void)line_number;

	/*  Assign the stack pointer to a temporary variable */
	tmp = *stack;

	/* If the stack is empty, print a newline character and return */
	if (!tmp)
	{
		putchar('\n');
		return;
	}
	/* Iterate through the stack and print the characters*/
	while (tmp)
	{
		if (tmp->n > 31 && tmp->n < 127)
			putchar(tmp->n);
		else
			break;
		tmp = tmp->next;
	}
	/* Print a newline character after printing the string */
	putchar('\n');
}
