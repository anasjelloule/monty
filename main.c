#include "monty.h"

stack_t *lst;
/**
 * main -> monty
 * @argc: num of arguments
 * @argv: arguments
 * Return: 0 or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	FILE *fl = fopen(argv[1], "r");

	unsigned int ln_nmbr = 0;
	char *ln = NULL;
	instruction_t *instruction = NULL;
	size_t glsize = 0;
	char *token;
	int arg = 0;

	err_num_arg(argc, argv[1]);
	err_file(fl, argv[1]);
	lst = malloc(sizeof(stack_t));
	if_malloc_fail(lst);

	while (getline(&ln, &glsize, fl) != -1)
	{
		token = strtok(ln, " ");
		while (token != NULL)
		{
			printf("%s", token);
			if (strcmp(token, "push") == 0)
			{
				token = strtok(NULL, " ");
				arg = atoi(token);
				push(&lst, arg);
			}
			token = strtok(NULL, " ");
		}
	}
	free(ln);
	if (lst != NULL)
		free(lst);

	fclose(fl);
	return (0);
}
