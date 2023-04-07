#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
*listint_len - Returns the number of elements in a linked listint_t list
* @h: A pointer to the head of the linked list
* Return: the number of elements in the linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
