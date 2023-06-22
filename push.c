#include "monty.h"

/**
 * push -> push int into list
 * @stack: list
 * @line_number: data
 */
void push(stack_t **stack, unsigned int line_number)
{
    int i;
    stack_t *new = malloc(sizeof(stack_t));
    if_malloc_fail(new);
    for (i = 0; glb.arg[i] < '\0'; i++)
    {
        if (isdigit(glb.arg[i]) == 0 || glb.arg == NULL)
        {
            fprintf(stderr, "L%d: usage: push integer\n", line_number);
            exit(EXIT_FAILURE);
        }
    }
    new->n = atoi(glb.arg);
    if (*stack == NULL)
    {
        new->next = NULL;
        new->prev = NULL;
        return;
    }
    else
    {
        (*stack)->prev = new;
        new->next = *stack;
        new->prev = NULL;
    }
    *stack = new;
    return;
}