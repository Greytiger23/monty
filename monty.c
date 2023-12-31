#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @ac: number of arguments
 * @av: list of arguments
 * Return: void
 */
int main(int ac, char **av)
{
const char *c = av[1];
char b[256];
int i = 0;
char *token;
instruction_t x;
stack_t *y = NULL;
FILE *a = fopen(c, "r");
if (ac != 2)
{
fprintf(stderr, "USAGE: %s file\n", av[0]);
exit(EXIT_FAILURE);
}
if (!a)
{
fprintf(stderr, "Error: Can't open file %s\n", c);
exit(EXIT_FAILURE);
}
while (fgets(b, sizeof(b), a) != NULL)
{
i++;
token = strtok(b, " \t\n");
if (token != NULL)
{
x.opcode = token;
exe(x, &y, i);
}
}
fclose(a);
while (y)
{
stack_t *t = y;
y = y->next;
free(t);
}
return (0);
}
