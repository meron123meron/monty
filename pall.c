#include "monty.h"

/**
 * pall - prints stack
 * @stack: double pointer
 * @n: line numbers
 * Return: Nothing
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
