#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_nodeint - it adds a node at the beginning of a linked list
* @head: A pointer to the head of the linked list
*@n: the value to be stored in the new node
* Return: the address (pointer) to the new node or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
