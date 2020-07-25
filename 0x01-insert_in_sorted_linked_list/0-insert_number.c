#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*
*
*
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node, *aux1, * aux2;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	aux1 = *head;
	new_node->n = number;
	while (aux1->next != NULL && aux1->next->n < new_node->n)
	{
		aux1 = aux1->next;
	}
	new_node->next = aux1->next;
	aux1->next = new_node;

return (new_node);
}
