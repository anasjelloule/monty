#include "monty.h"

/**
 * main -> monty
 * @argc: num of arguments
 * @argv: arguments
 * Return: 0 or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	FILE *file = fopen(argv[1], "r");
	stack_t *list;

	if (argc != 2 || argv[1] == NULL)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	list = malloc(sizeof(stack_t));
	if (list == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	fclose(file);
	return (0);
}
