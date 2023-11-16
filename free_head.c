#include "monty.h"

/**
 * free_head - Frees the memory allocated to the head
 * sets it to NULL
 */

void free_head(void)
{
	if (arguments->head)
		free_stack(arguments->head);
	arguments->head = NULL;
}
