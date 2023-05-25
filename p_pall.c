#include "alx_monty.h"

/**
 * pall - prints list
 *
 * @stack: pointer to list
 * @line_number: number of line where command was found
 */

void pall(stack_t **stack, unsigned int line_number)
{
	const stack_t *tmp = *stack;
	(void)line_number;

	/*Check if the stack is empty*/
	if (!stack)
		return;

	/* Traverse the stack and print each element */
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
