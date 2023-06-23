#include "monty.h"

/**
 * pall -> print the list
* @stack: list
* @line_number: line number
*/
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;

(void)line_number;
if (current == NULL)
return;
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
