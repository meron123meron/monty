#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @stack: double pointer
 * @line_cnt: line number
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_cnt);
		exit(EXIT_FAILURE);

	}
	printf("%d\n", (*stack)->n);
}
