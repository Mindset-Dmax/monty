#include "monty.h"

/**
 * validate_arguments - function to control the CLA
 * @argc: command line arguments counter
 */

void validate_arguments(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
