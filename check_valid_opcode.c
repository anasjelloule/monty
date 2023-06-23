#include "monty.h"

/**
 * check_valid_opcode -> check if the line is a valid opcode
 */

void check_valid_opcode(stack_t *list)
{
    instruction_t cmd[] = {
        {"push", push},
        {"pall", pall},
        {"swap", swap},
        {"pint", pint},
    };
    int i;
    char *token;

    token = strtok(glb.line, " \n\t");
    while (token != NULL)
    {
        i = 0;
        while (i < 5)
        {
            if (strcmp(token, cmd[i].opcode) == 0)
            {
                if (strcmp(cmd[i].opcode, "pall") != 0 || strcmp(cmd[i].opcode, "pint") != 0)
                {
                    printf("%s: ",token);
                    token = strtok(NULL, " \n\t");
                    glb.arg = token;
                }
                else
                    strtok(NULL, " \n\t");
                cmd[i].f(&list, glb.line_num);
                break;
            }
            i++;
        }
        if (i == 5)
        {
            fprintf(stderr, "L%d: unknown instruction %s\n", glb.line_num, token);
            exit(EXIT_FAILURE);
        }
        token = strtok(NULL, " \n\t");
    }
    return;
}
