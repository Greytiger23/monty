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
stack_t *t = y;
y = y->next;
free(t);
}
}
/**
 * add - add function
 * Return: void
 */
void add(void)
{
if (x < 1)
{
fprintf(stderr, "L%d: can't add, stack too short\n", __LINE__);
exit(EXIT_FAILURE);
}
s[x - 1] += s[x];
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
int t;
if (strncmp(a.opcode, "push", 4) == 0)
{
push(y, t, b);
}
else if (strcmp(a.opcode, "pall") == 0)
{
pall(y, b);
}
else if (strcmp(a.opcode, "pint") == 0)
{
pint();
}
else if (strcmp(a.opcode, "pop") == 0)
{
pop(y, b);
}
else if (strcmp(a.opcode, "swap") == 0)
{
swap();
}
else if (strcmp(a.opcode, "add") == 0)
{
add();
}
else if (strcmp(a.opcode, "nop") == 0)
{
continue;
}
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", b, a.opcode);
exit(EXIT_FAILURE);
}
}
