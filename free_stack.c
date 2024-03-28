#include "monty.h"

/**
 * stack_free - frees stack
 * @stack: top of the stack
 */
void stack_free(stack_t *stack)
{
	stack_t *current;

	for (current = stack; current != NULL; current = stack)
	{
		stack = stack->next;
		free(current);
	}
}
