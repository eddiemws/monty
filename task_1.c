#include "monty.h"

/**
 * pint - show value top of the stack
 * @stack: top of the stack
 * @line_number: line number
*/
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		handle_pint_error(line_number, stack);
	}

	printf("%d\n", (*stack)->n);
}
