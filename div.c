#include "monty.h"

/**
 * _div - divides the next top value by the top value
 * @stack: double pointer
 * @line_cnt: line number
 *
 * Return: Nothing
 */
void _div(stack_t **stack, unsigned int line_cnt)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
		exit(EXIT_FAILURE);
		;
		return;
	}

	result = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, line_cnt);
	(*stack)->n = result;
}
