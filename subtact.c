#include "alx_monty.h"

/**
 * sub - subs top two elements and pops top element
 *
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */

void sub(stack_t **stack, unsigned int line_number)
{
	/* variable declaration */
	stack_t *temp = *stack;
	stack_t *counter = *stack;
	int i = 0;

	/* Count the number of elements in the stack */
	for (; counter; i++)
		counter = counter->next;
	/* Check if the stack has at least 2 elements or if it's empty */
	if (i < 2 || !*stack || !(*stack)->next || !stack)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		frees_struct(stack); /* free memory */
	}
	/* Subtract the value element  and store the result in the second element */
	temp->next->n = temp->next->n - temp->n;
	/*  Pop the top element from the stack */
	pop(stack, line_number);
}
