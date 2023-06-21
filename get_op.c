#include "monty.h"

int(*get_op(char *s)(char *, int))
{
    instruction_s ops[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}};
    int i = 0;
    while (ops.opcode != NULL)
    {
        if (strcmp(s, op[i].op) == 0)
            return (op[i].f);
        i++;
    }
    return (get_op(s));
}