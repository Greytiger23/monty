#ifndef MONTY_H
#define MONTY_H

#define STACK_SIZE 1000
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
void push(stack_t **y, unsigned int i, char *a);
void pall(stack_t **y, unsigned int a);
void pint(stack_t **y, unsigned int a);
void pro(const char *f);
int main(int ac, char **av);
void pop(stack_t **y, unsigned int a);
void swap(stack_t **y, unsigned int a);
void add(stack_t **y, unsigned int a);
void exe(instruction_t a, stack_t **y, unsigned int b);
void p(instruction_t a, unsigned int b);
char *_strdup(const char *a);
#endif
