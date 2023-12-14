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
void push(stack_t **y, int a, unsigned int i)
{
stack_t *x = malloc(sizeof(stack_t));
if (!x)
{
fprintf(stderr, "L%d: usage: push integer\n", __LINE__);
exit(EXIT_FAILURE);
}
x->n = a;
x->prev = NULL;
x->next = *y;
if (*y)
{
(*y)->prev = x;
}
*y = x;
}
/**
 * pall - pall function
 * @y: stack list
 * @a: integer
 * Return: void
 */
void pall(stack_t **y, unsigned int a)
{
stack_t *b = *y;
while (b)
{
printf("%d\n", b->n);
b = b->next;
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
