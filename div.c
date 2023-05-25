#include "alx_monty.h"

/**
 * division - divides top two elements, stores sum in
 * second to top and pops top element
 *
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */
void division(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *counter = *stack;
	int i = 0;

	for (; counter; i++)
		counter = counter->next;
	if (i < 2 || !*stack || !(*stack)->next || !stack)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		frees_struct(stack);
	}
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		frees_struct(stack);
	}
	temp->next->n = temp->next->n / temp->n;
	pop(stack, line_number);
}
