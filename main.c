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

	if (argc != 2 || file == NULL)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fclose(file);
	return (0);
}
