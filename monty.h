#ifndef MONTY_H
#define MONTY_H

#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**GLOBALE VAR**/

/**
 * struct global - global variable
 * @file: file opened
 * @arg: argument next to the opcode
 * @line_num: line number
 * @line: line
 *
 * Description: variables
*/
typedef struct global
{
char *file;
char *arg;
char *line;
unsigned int line_num;
} global;
extern global glb;
/***************/
char *tokenize(char *str, char *delimiter);
void check_valid_opcode(stack_t *list);
/******************/
void swap(stack_t **stack, unsigned int ln_nmbr);
void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int ln_nmbr);
void pall(stack_t **stack, unsigned int line_number);

/**ERROR**/
void err_num_arg(int argc, char argv[]);
void err_file(FILE *file, char *argv);
void if_malloc_fail(stack_t *list);

#endif
