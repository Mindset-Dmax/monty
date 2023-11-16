#include "monty.h"

/**
 * pchar:  function to print the character at the top of a stack
 * @stack: variable to point to stack
 * @line_number: counter of location to call the function
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;

	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;

	if (tmp1->n < 0 || tmp1->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", tmp1->n);
}
