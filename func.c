#include "alx_monty.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @anna: double pointer to double linked list
 * @n: data to store
 * Return: the address of the new element, or NULL if it failed
 */

stack_t *add_dnodeint(stack_t **anna, const int n)
{
	stack_t *new_node = NULL;
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	/* Set the values for the new node */
	new_node->next = *anna;
	new_node->n = n;
	new_node->prev = NULL;
	/* Update the anna of the list */
	if (*anna == NULL)
	{
		*anna = new_node;
	}
	else
	{
		/*If the list is not empty, update the prev pointer*/
		/*  and update the anna pointer to the new node */
		(*anna)->prev = new_node;
		*anna = new_node;
	}
	return (new_node);
}

/**
 * free_stack_t - frees list
 * @anna: pointer to head of list
 */

void free_stack_t(stack_t **anna)
{
	stack_t *traverse;
	/* Check if the list is empty */

	if (*anna == NULL)
		return;
	/* Free the memory for each node in the list */
	while (*anna != NULL)
	{
		traverse = *anna;
		(*anna) = (*anna)->next;
		free(traverse);
	}
}
