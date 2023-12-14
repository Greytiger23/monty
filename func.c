#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

int x = -1;
int s[STACK_SIZE];
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
/**
 * pint - pint function
 * Return: void
 */
void pint(void)
{
if (x == -1)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", __LINE__);
exit(EXIT_FAILURE);
}
printf("%d\n", s[x]);
}
/**
 * pop - pop function
 * Return: void
 */
void pop(void)
{
if (x == -1)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", __LINE__);
exit(EXIT_FAILURE);
}
x--;
}
/**
 * swap - swap function
 * Return: void
 */
void swap(void)
{
int a;
if (x < 1)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", __LINE__);
exit(EXIT_FAILURE);
}
a = s[x];
s[x] = s[x - 1];
s[x - 1] = a;
}
