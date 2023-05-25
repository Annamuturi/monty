#include "alx_monty.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: double pointer to double linked list
 * @n: data to store
 * Return: the address of the new element, or NULL if it failed
 */

stack_t *add_dnodeint(stack_t **head, const int n)
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
	new_node->next = *head;
	new_node->n = n;
	new_node->prev = NULL;
	/* Update the head of the list */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/*If the list is not empty, update the prev pointer*/
		/*  and update the head pointer to the new node */
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}

/**
 * free_stack_t - frees list
 * @head: pointer to head of list
 */

void free_stack_t(stack_t **head)
{
	stack_t *traverse;
	/* Check if the list is empty */

	if (*head == NULL)
		return;
	/* Free the memory for each node in the list */
	while (*head != NULL)
	{
		traverse = *head;
		(*head) = (*head)->next;
		free(traverse);
	}
}
