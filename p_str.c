#include "alx_monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 *
 * @stack: pointer to list
 * @line_number: number of line where command was found
*/

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	(void)line_number;

	/*  Assign the stack pointer to a temporary variable */
	temp = *stack;

	/* If the stack is empty, print a newline character and return */
	if (!temp)
	{
		putchar('\n');
		return;
	}
	/* Iterate through the stack and print the characters*/
	while (temp)
	{
		if (temp->n > 31 && temp->n < 127)
			putchar(temp->n);
		else
			break;
		temp = temp->next;
	}
	/* Print a newline character after printing the string */
	putchar('\n');
}
