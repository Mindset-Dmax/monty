#include "monty.h"

/**
 * malloc_failed - function torespond to error when memory cant be allocated
 * Return: nothing
 */

void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_arguments();
	exit(EXIT_FAILURE);
}
