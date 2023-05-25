#include "monty.h"
/**
 * mul - multiplies top two elements, stores sum in
 * second to top and pops top element
 *
 * @stack: poiunter to list
 * @line_number: number of line where command was found
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *counter = *stack;
	int i = 0;

	for (; counter; i++)
		counter = counter->next;
	if (i < 2 || !*stack || !(*stack)->next || !stack)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		frees_struct(stack);
	}
	temp->next->n = temp->n * temp->next->n;
	pop(stack, line_number);
}
