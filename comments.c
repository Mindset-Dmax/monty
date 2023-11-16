#include "monty.h"

/**
* is_comment - function to distinguish comments starting with #"
* Return: on success 1 or 0 on failure
*/
int is_comment(void)
{
	if (
		arguments->tokens &&
		arguments->tokens[0] &&
		arguments->tokens[0][0] == '#'
	)
		return (1);

	return (0);
}
