#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - push function
 * @y: stack list
 * @a: integer
 * @i: integer
 * Return: void
 */
void push(stack_t **y, int a, unsigned int i)
{
stack_t *x = malloc(sizeof(stack_t));
(void)i;
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
(void)a;
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
 * @y: stack
 * @a: integer
 * Return: void
 */
void pop(stack_t **y, unsigned int a)
{
stack_t *b = *y;
if (!*y)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", a);
exit(EXIT_FAILURE);
}
*y = (*y)->next;
if (*y)
{
(*y)->prev = NULL;
}
free(b);
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
