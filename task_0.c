#include "monty.h"

/**
 * push - pushes an element
 * @stack: top of the stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	int n;

	if (glob.arg == NULL || !is_number(glob.arg))
	{
		handle_push_error(stack, line_number);
	}

	n = atoi(glob.arg);
	if (add_node(stack, n) == NULL)
	{
		handle_malloc_error(stack, line_number);
	}
}
/**
 * pall - show values on the stack
 * @stack: top of the stack
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	for (; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		(void)line_number;
	}
}

