#include "alx_monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 *
 * @stack: poiunter to list
 * @line_number: number of line where command was found
*/

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	(void)line_number;

	temp = *stack;
	if (!temp)
	{
		putchar('\n');
		return;
	}
	while (temp)
	{
		if (temp->n > 31 && temp->n < 127)
			putchar(temp->n);
		else
			break;
		temp = temp->next;
	}
	putchar('\n');
}
