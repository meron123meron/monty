#include "monty.h"

/**
 * opcode - function in charge of running builtins
 * @stack: double pointer
 * @str: string
 * @line_cnt: line numbers
 * Return: Nothing
 */
void opcode(stack_t **stack, char *str, unsigned int line_cnt)
{
	int i = 0;

	instruction_t op[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}
	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (op[i].opcode)
	{
		if (strcmp(op[i].opcode, str) == 0)
		{
			op[i].f(stack, line_cnt);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, str);
	exit(EXIT_FAILURE);
}
/**
 * file_error - prints error message
 *
 * @argv: the arguments
 *
 * Return: Nothing
 *
 */

void file_error(char *argv)
{

	fprintf(stderr, "Error: Can't open file %s\n", argv);

	exit(EXIT_FAILURE);

}

/**
 * error_usage - prints usage message
 *
 * Return: Nothing
 *
 */

void error_usage(void)
{

	fprintf(stderr, "USAGE: monty file\n");

	exit(EXIT_FAILURE);

}
