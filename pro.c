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
int i = 0, t;
size_t x;
FILE *a = fopen(f, "r");
if (a == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", f);
exit(EXIT_FAILURE);
}
while (fgets(b, sizeof(b), a) != NULL)
{
i++;
x = strlen(b);
if (x > 0 && b[x - 1] == '\n')
{
b[x - 1] = '\0';
}
if (strncmp(b, "push", 4) == 0)
{
t = atoi(b + 5);
push(t);
}
else if (strcmp(b, "pall") == 0)
{
pall();
}
else if (strcmp(b, "pint") == 0)
{
pint();
}
else if (strcmp(b, "pop") == 0)
{
pop();
}
else if (strcmp(b, "swap") == 0)
{
swap();
}
else if (strcmp(b, "add") == 0)
{
add();
}
else if (strcmp(b, "nop") == 0)
{
continue;
}
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", i, b);
exit(EXIT_FAILURE);
}
}
fclose(a);
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
pop();
}
