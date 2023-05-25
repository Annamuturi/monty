#include "alx_monty.h"

/**
 * parse_line - reads and tokenizes line
 */
void parse_line(void)
{
	/* variable declaration */
	stack_t *anna = NULL;
	char *buffer = NULL, *buffer2 = NULL, **commands;
	size_t len = 0;
	ssize_t nread;
	int line_count = 0, i = 0, buff_std = buffstd;

	commands = malloc(buff_std * sizeof(char *)); /* Allocate memory */
	if (commands == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	/* Loop to read and process each line from the input */
	for (line_count = 1; (nread = getline(&buffer, &len, command_t.store_check))
			!= -1; line_count++)
	{
		if (nread == 2)
			continue;
		buffer2 = strtok(buffer, " \n\t$");/* tokenize the character*/
		command_t.line = buffer;
		if (buffer2 == NULL || buffer2[0] == '#')
			continue;
		validate_push_opcode(i, line_count, commands, buffer2, anna);
		command_t.number = commands[1];
		command_t.instructions = commands;
		call_opcode(line_count, &anna);/*Call the opcode function */
	}
	free_all(buffer, anna, commands, command_t.store_check);
}
/**
 * call_opcode - calls on struct function to find opcode and execute
 * @line_count: line number of opcode
 * @anna: pointer to list
 */
void call_opcode(int line_count, stack_t **anna)
{

	void (*f)(stack_t **stack, unsigned int line_number);

	f = select_command(command_t.instructions);
	if (f == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_count,
			command_t.instructions[0]);
		free_all(command_t.line, *anna, command_t.instructions,
			 command_t.store_check);
		exit(EXIT_FAILURE);
	}
	f(anna, line_count);
}
/**
 * validate_push_opcode - validates if push has an argument
 * @i: count
 * @line_count: command line number
 * @commands: tokenized a line
 * @buffer2: token iterator
 * @anna: pointer to list
 */

void validate_push_opcode(int i, int line_count, char **commands,
		char *buffer2, stack_t *anna)
{
	for (i = 0; buffer2; i++)
	{/* Store the token in the commands array */
		commands[i] = buffer2;
		buffer2 = strtok(NULL, " \n\t$"); /*Get the next token*/
		if (strcmp(commands[i], "push") == 0)
		{/* If there are tokens after "push", break the loop*/
			if (i >= 2)
				break;
			if (buffer2 == NULL)/*If there is no token after "push"*/
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_count);
				free_all(command_t.line, anna, commands, command_t.store_check);
				exit(EXIT_FAILURE);
			}
		}
	}
}
