#include "alx_monty.h"

/**
 * swap - swaps top two elements
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */
void swap(stack_t **stack, unsigned int line_number)
{
	/* variable declaration */
	stack_t *tmp = NULL;
	stack_t *tmp2 = NULL;
	stack_t *tmp3 = NULL;
	stack_t *count = *stack;
	int val = 0, a = 0;

	for (; count; a++) /* Count number of elements in the stack*/
		count = count->next;
	/* Check if the stack has at least 2 elements or if it's empty */
	if (a < 2 || !*stack || !(*stack)->next || !stack)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		frees_struct(stack); /* free memory */
	}
	if (a == 2)/*If the stack has exactly 2 element,swap their values*/
	{
		val = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = val;
	}
	else
	{/* Swap the top two elements using temporary variables */
		tmp = *stack;
		tmp2 = (*stack)->next;
		tmp3 = (*stack)->next->next;

		tmp2->next = *stack;
		tmp3->prev = *stack;
		tmp2->prev = NULL;
		tmp->next = tmp3;
		tmp->prev = tmp2;
		*stack = tmp2;
	}
}

