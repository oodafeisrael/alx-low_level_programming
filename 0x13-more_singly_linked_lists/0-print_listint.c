#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_listint - Prints all the elements of a listint_t list
*@h : pointer to the head of the list
*
*Return: Number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
