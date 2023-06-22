#include "monty.h"

/**
 * check_valid_opcode -> check if the line is a valid opcode
 */

check_valid_opcode(char *str)
{
    char *num;
    str = strtok(ln, " ");
    while (str != NULL)
    {
        // printf("%s", str);
        if (strcmp(str, "push") == 0)
        {
            num = (strtok(NULL, " "));
            if (isdigit(num) != 0)
            {
                lst->n = num;
            }
        }
        else
            str = strtok(NULL, " ");
    }
}