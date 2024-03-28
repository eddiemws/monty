#include "monty.h"

/**
 * add - adds on the stack
 * @stack: top of the stack
 * @line_number: line number
 **/
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		stack_too_short_error(line_number, stack);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
