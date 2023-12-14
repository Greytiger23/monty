#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
int x = -1;
int s[STACK_SIZE];
/**
 * main - entry point
 * Return: void
 */
int main(void)
{
push(10);
push(20);
push(30);
pall();
return (0);
}
/**
 * push - push function
 * @a: integer
 * Return: void
 */
void push(int a)
{
int x = -1;
if (x == STACK_SIZE - 1)
{
fprintf(stderr, "L%d: usage: push integer\n", __LINE__);
exit(EXIT_FAILURE);
}
else
{
s[x++] = a;
}
}
/**
 * pall - pall function
 * Return: void
 */
void pall(void)
{
int a;
if (x == -1)
{
return;
}
for (a = x; a >= 0; a--)
{
printf("%d\n", a);
}
}
