#include "monty.h"

/**
 * pall -> print the list
 * @stack: list
 * @line_number: line num
 */
void pall(stack_t **stack, unsigned int line_number)
{
    int i;
    if (*stack == NULL)
       return;
    for (i = 0; *stack != NULL; i++)
    {
        printf("%d\n", (*stack)->n);
        (*stack) = (*stack)->next;
    }
    return;
}