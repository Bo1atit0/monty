#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
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


extern char *arg;

void get_op_file(char *file);
int exec(char *line, stack_t **stack, unsigned int line_number);
/*ssize_t get_line(char **storage, size_t *size, FILE *stream);*/

/*Doubly linked list functions*/
void addnode(stack_t **top, int n);




/*opcodes*/
void _push(stack_t **top, unsigned int line_number);
void _pall(stack_t **top, unsigned int line_number);

#endif