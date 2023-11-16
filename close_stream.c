#include "monty.h"

/**
 * close_stream - function to set stram to NULL
 */

void close_stream(void)
{
	if (arguments->stream == NULL)
		return;

	fclose(arguments->stream);
	arguments->stream = NULL;
}
