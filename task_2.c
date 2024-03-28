#include "monty.h"

/**
 * pop - pop element of the stack
 * @stack: top of the stack
 * @line_number: line number
 **/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free(glob.line);
		stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
	if (*stack != NULL)
		(*stack)->prev = NULL;
}
