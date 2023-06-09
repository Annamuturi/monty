#include "alx_monty.h"
/**
 * main - interprets a monty/bytecode file
 *
 * @argc: argument counter
 * @argv: arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{

	file_open(argc, argv);

	parse_line();

	return (0);
}

/**
 * select_command - function pointer to check for command
 *
 * @token: pointer with commands
 * Return: function
 */
void (*select_command(char **token))(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t op_functions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", division},
		{"mul", mul},
		{"mod", mod},
		{"#", nop},
		{"pchar", pchar},
		{"pstr", pstr},
		{NULL, NULL}};

	for (; op_functions[i].opcode; i++)
	{
		if (strcmp(op_functions[i].opcode, token[0]) == 0)
			return (op_functions[i].f);
	}
	return (NULL);
}
