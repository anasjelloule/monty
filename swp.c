#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: the stack
 * @ln_nmbr: the current line number
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int ln_nmbr)
{
	int swper;

	if ((*stack) == NULL)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n", ln_nmbr);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next == NULL)
	{
		fprintf(stdout, "L%d: can't swap, stack too short\n", ln_nmbr);
		exit(EXIT_FAILURE);
	}
	swper = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swper;
}
