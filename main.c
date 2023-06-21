#include "monty.h"

/**
 * main -> monty
 * @argc: num of arguments
 * @argv: arguments
 * Return: 0 or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	FILE *fl = fopen(argv[1], "r");
	stack_t *lst;
 	unsigned int ln_nmbr = 0;
	char *ln = NULL;
	instruction_t *instruction = NULL;
	size_t glsize = 0;
	if (argc != 2 || argv[1] == NULL)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (fl == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	lst = malloc(sizeof(stack_t));
	if (lst == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (getline(&ln, &glsize, fl) != -1)
	{
	  ln_nmbr++;
	}
	if (ln)
	  free(ln);
 
	fclose(fl);
	return (0);
}
