#include "monty.h"

/**
 * check_valid_opcode -> check if the line is a valid opcode
 */

void *check_valid_opcode(stack_t *list)
{
    instruction_t cmd[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}

    };
    int i = 0;
    char *token;
    token = strtok(glb.line, " ");
    while (token != NULL)
    {
        if (strcmp(token, cmd[i].opcode) == 0)
        {
            if (strcmp(cmd[i].opcode, "pall") != 0 && strcmp(cmd[i].opcode, "pint") != 0 )
            {
                token = strtok(NULL, " ");
                glb.arg = token;
            }
            cmd[i].f;
        }
        else
        {
            fprintf(stderr, "L%d: unknown instruction %s\n", glb.line_num, cmd[i].opcode);
            exit(EXIT_FAILURE);
        }
        i++;
        token = strtok(NULL, " ");
    }
}