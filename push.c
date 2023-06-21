#include "monty.h"

/**
 * push -> push int into list
 * @h: list
 * @n: data
 * Return: adress of new element
 */
instruction_t *push(stack_t **stack, unsigned int line_number)
{
    int n;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        return (NULL);
    }
    
}