#ifndef MONTY_H
#define MONTY_H


/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <ctype.h>
#include <stddef.h>



/* STRUCTURES */

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


/**
 * struct arg_s - structure to hold variables
 * @stream: connects stream from a file
 * @line: next line string
 * @line_number: variable to save current line number
 * @tokens: variable to store tokens
 * @instruction: reads instruction from line
 * @n_tokens: counter for tokens in a line
 * @head: beginning/top of the stack
 * @stack_length: counter for nodes in a stack
 * @stack: determines whether to use data structure for queues or stac
 */
typedef struct arg_s
{
        FILE *stream;
        char *line;
	unsigned int line_number;
	char **tokens;
	int n_tokens;
	instruction_t *instruction;
	stack_t *head;
	int stack_length;
	int stack;
} arg_t;


/* GLOBAL VARIABLES */
extern arg_t *arguments;


/* FUNCTIONS */
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);

int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
FILE *fdopen(int fd, const char *mode);

void malloc_failed(void);
void validate_arguments(int argc);
void get_stream(char *fileName);
void close_stream(void);
void free_arguments();
void free_head(void);
void initialize_arguments();
int is_number(char *str);
void free_all_args(void);
void delete_stack_node(void);
void tokenize_line(void);
void free_tokens(void);
void run_instruction(void);
void get_instruction(void);
void free_stack(stack_t *head);

#endif /* MONTY_H */
