#include "monty.h"

/**
* free_stack - function to free node in a stack
* @head: node at the beginning
* Return: nothing
*/
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_stack(head->next);
	}

	free(head);
}
