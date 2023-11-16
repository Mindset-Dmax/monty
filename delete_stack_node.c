#include "monty.h"

/**
* delete_stack_node - function that deletes node at the end
* Return: nothing
*/
void delete_stack_node(void)
{
	stack_t *temp;

	temp = arguments->head;
	arguments->head = temp->next;
	free(temp);
}
