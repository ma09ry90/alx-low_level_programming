#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *second;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	second = (*head)->next;
	(*head)->next = 0;
	free(*head);
	*head = second;
	return (data);
}
