#include "alx_monty.h"

/**
 * mul - multiply top two elements and pops top element
 *
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */

void mul(stack_t **stack, unsigned int line_number)
{
	/* variable declaration */
	stack_t *tmp = *stack;
	stack_t *counter = *stack;
	int i = 0;

	/* Count the number of elements in the stack */
	for (; counter; i++)
		counter = counter->next;
	/* Check if the stack has at least 2 elements or if it's empty */
	if (i < 2 || !*stack || !(*stack)->next || !stack)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		frees_struct(stack); /* free memory */
	}
	/* Multiply the values elements and store the in the second element */
	tmp->next->n = tmp->n * tmp->next->n;
	/* Pop the top element from the stack*/
	pop(stack, line_number);
}
