#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
int s[STACK_SIZE];
int n;
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
if (n == -1)
{
fprintf(stderr, "L%d: usage: push integer\n", __LINE__);
exit(EXIT_FAILURE);
}
s[n++] = a;
}
/**
 * pall - pall function
 * Return: void
 */
void pall(void)
{
int a;
if (n == -1)
{
return;
}
for (a = n; a >= 0; a--)
{
printf("%d\n", a);
}
}
