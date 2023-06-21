#include "monty.h"

/**
 * push -> push int into list
 * @stack: list
 * @line_number: data
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new = malloc(sizeof(stack_t));

    if (*stack == NULL)
    {
        new->next == NULL;
        return;
    }

    
}