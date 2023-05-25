#include "alx_monty.h"

/**
 * swap - swaps top two elements
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */
void swap(stack_t **stack, unsigned int line_number)
{
	/* variable declaration */
	stack_t *temp = NULL;
	stack_t *temp2 = NULL;
	stack_t *temp3 = NULL;
	stack_t *counter = *stack;
	int val = 0, i = 0;

	for (; counter; i++) /* Count number of elements in the stack*/
		counter = counter->next;
	/* Check if the stack has at least 2 elements or if it's empty */
	if (i < 2 || !*stack || !(*stack)->next || !stack)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		frees_struct(stack); /* free memory */
	}
	if (i == 2)/*If the stack has exactly 2 element,swap their values*/
	{
		val = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = val;
	}
	else
	{/* Swap the top two elements using temporary variables */
		temp = *stack;
		temp2 = (*stack)->next;
		temp3 = (*stack)->next->next;

		temp2->next = *stack;
		temp3->prev = *stack;
		temp2->prev = NULL;
		temp->next = temp3;
		temp->prev = temp2;
		*stack = temp2;
	}
}

