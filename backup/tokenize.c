#include "monty.h"

/**
 * tokenize -> tokenize a string
 * @str: string that will be tokenized
 * @delimiter: delimiter
 * Return: number of tokens
 */
char *tokenize(char *line, char *delimiter)
{
    char *token;
    token = strtok(ln, delimiter);
    while (token != NULL)
    {
        printf("%s", token);
        if (strcmp(token, "push") == 0)
        {
            token = strtok(NULL, delimiter);
            arg = atoi(token);
            push(&lst, arg);
        }
        else
        {
            printf("L<line_number>: unknown instruction <opcode>");
            exit(EXIT_FAILURE);
        }

        token = strtok(NULL, delimiter);
    }
}