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
 * @y: stack list
 * @a: integer
 * Return: void
 */
void pint(stack_t **y, unsigned int a)
{
if (!*y)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", a);
exit(EXIT_FAILURE);
}
printf("%d\n", (*y)->n);
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
 * @y: stack
 * @a: integer
 * Return: void
 */
void swap(stack_t **y, unsigned int a)
{
stack_t *b = (*y)->next;
if (!*y || !(*y)->next)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", a);
exit(EXIT_FAILURE);
}
(*y)->next = b->next;
b->prev = (*y)->prev;
if ((*y)->next)
{
(*y)->next->prev = *y;
}
(*y)->prev = b;
b->next = *y;
*y = b;
}
