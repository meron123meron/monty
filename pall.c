#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main in start.c
 * @n: amount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int n)
{
stack_t *node, *head;

	(void) n;

if (!stack || !(*stack))
return;
node = head = *stack;
while (node)
{
fprintf(stdout, "%d\n", node->n);
node = node->next;
}

}
