#include "monty.h"

/**
 * mul - function that multiplies two variiables in a stack
 * @stack: variable to point to stack
 * @line_number: variable where the number is called
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;

	tmp2->n = tmp2->n * tmp1->n;
	delete_stack_node();

	arguments->stack_length -= 1;
}
