/*
 * File: 0-print_listint.c
 * Auth: Essien Anietie Lawrence
 */
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t arrow = 0;

	while (node)
	{
		printf("%i\n", node->n);
		arrow++;
		node = node->next;
	}

	return (arrow);
}
