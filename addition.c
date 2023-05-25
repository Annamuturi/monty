# include "alx_monty.h"


/**
 * add - adds top two elements and pops top element
 *
 * @stack: pointer to list
 * @line_number: number of line where command was found
 */

void add(stack_t **stack, unsigned int line_number)
{
	/* variable declaration */
	/* Temporary variable to hold the top element */
	stack_t *tmp = *stack;
	/* Counter variable to count the number of elements */
	stack_t *counter = *stack;
	int i = 0;

	/* Count the number of elements in the stack */
	for (; counter; i++)
		counter = counter->next;
	/* Check if the stack has at least 2 elements or if it's empty */
	if (i < 2 || !*stack || !(*stack)->next || !stack)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		frees_struct(stack); /* Free the memory allocated */
	}
	/*Add the values and store the result in the second element */
	tmp->next->n = tmp->n + tmp->next->n;
	pop(stack, line_number);
}
