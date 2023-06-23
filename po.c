#include "monty.h"

/**
 * pop - removes
 * @stack: stack
 * @ln_nmbr: currnt line number
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int ln_nmbr)
{
	stack_t *tmppo;

	if ((*stack) == NULL)
	{
		fprintf(stdout, "L%d: can't pop an empty stack\n", ln_nmbr);
		exit(EXIT_FAILURE);
	}

	tmppo = *stack;
	*stack = (*stack)->next;
	free(tmppo);
}
