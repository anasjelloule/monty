#include "monty.h"

global glb;
/**
 * main -> monty
 * @argc: num of arguments
 * @argv: arguments
 * Return: 0 or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	FILE *fl = fopen(argv[1], "r");

	unsigned int line_num = 0;
	stack_t *list;
	char *ln = NULL;
	size_t glsize = 0;

	err_num_arg(argc, argv[1]);
	err_file(fl, argv[1]);
	list = malloc(sizeof(stack_t));
	if_malloc_fail(list);

	while (getline(&ln, &glsize, fl) != -1)
	{
		line_num++;
		glb.line = ln;
		glb.line_num = line_num;
		check_valid_opcode(list);
	}
	free(ln);
	if (list != NULL)
		free(list);

	fclose(fl);
	return (0);
}
