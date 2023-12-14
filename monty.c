#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @ac: number of arguments
 * @av: list of arguments
 * Return: void
 */
int main(int ac, char **av)
{
const char *a;
a = av[1];
(void)av;
if (ac != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
pro(a);
return (0);
}
