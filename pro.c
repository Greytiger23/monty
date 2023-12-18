#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pro - process the file function
 * @f: const char
 * Return: void
 */
void pro(const char *f)
{
char b[256];
int i = 0;
instruction_t x;
stack_t *y = NULL;
stack_t *t = y;
FILE *a = fopen(f, "r");
if (a == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", f);
exit(EXIT_FAILURE);
}
while (fgets(b, sizeof(b), a) != NULL)
{
i++;
exe(x, &y, i);
}
fclose(a);
while (y)
{
y = y->next;
free(t);
}
}
/**
 * add - add function
 * @y: stack list
 * @a: integer
 * Return: void
 */
void add(stack_t **y, unsigned int a)
{
if (!*y || !(*y)->next)
{
fprintf(stderr, "L%d: can't add, stack too short\n", a);
exit(EXIT_FAILURE);
}
(*y)->next->n += (*y)->n;
pop(y, a);
}
/**
 * exe - execute instructions function
 * @a: list of instructions
 * @y: stack
 * @b: integer
 * Return: void
 */
void exe(instruction_t a, stack_t **y, unsigned int b)
{
char *t;
if (strncmp(a.opcode, "push", 6) == 0)
{
t = a.opcode;
push(y, b, t);
}
else if (strcmp(a.opcode, "pall") == 0)
{
pall(y, b);
}
else if (strcmp(a.opcode, "pint") == 0)
{
pint(y, b);
}
else if (strcmp(a.opcode, "pop") == 0)
{
pop(y, b);
}
else if (strcmp(a.opcode, "swap") == 0)
{
swap(y, b);
}
else if (strcmp(a.opcode, "add") == 0)
{
add(y, b);
}
else if (strcmp(a.opcode, "nop") == 0)
{
return;
}
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", b, a.opcode);
exit(EXIT_FAILURE);
}
}
/**
 * _strdup - function
 * @a: char
 * Return: void
 */
char *_strdup(const char *a)
{
size_t b = strlen(a) + 1;
char *c = malloc(b);
if (c)
{
memcpy(c, a, b);
}
return (c);
}
