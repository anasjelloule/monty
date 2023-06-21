#include "monty.h"

/**
 * err_num_arg -> num of argument invalide
 * @argc: num of arg
 * @argv: arg
*/
void err_num_arg (int argc, char argv[])
{
    if (argc != 2 || argv == NULL)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * err_file -> file == NULL
 * @file: file
*/
void err_file (FILE *file, char *argv)
{
    if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv);
		exit(EXIT_FAILURE);
	}
}

/**
 * if_list_null -> verify if malloc failed or not
 * @list: list to allocate
*/
void if_list_null (stack_t *list)
{
    if (list == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}