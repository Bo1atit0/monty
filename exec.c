#include "monty.h"

/**
* exec - executes the opcode
* @line: line of monty file
* @stack: stack head
* @line_number: line number of instruction
* Return: 0 on success
*/
int exec(char *line, stack_t **stack, unsigned int line_number)
{
int i = 0;
char *opcode;
char *delim = " \t\n";

instruction_t instruct[] = {
{"push", _push},
{"pall", _pall},
{"pint", _pint},
{"pop", _pop},
{"swap", _swap},
{NULL, NULL}
};
/* stack = NULL;*/

opcode = strtok(line, delim);
if (opcode && opcode[0] == '#')
{
return (0);
}
gv.arg = strtok(NULL, delim);


while (instruct[i].opcode != NULL && opcode != NULL)
{
if (strcmp(opcode, instruct[i].opcode) == 0)
{
/* printf("nexec function. Value of stack: %p\n", (void *)*stack);*/
instruct[i].f(stack, line_number);
return (0);
}
i++;
}
if (opcode == NULL && instruct[i].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %sn", line_number, opcode);
free(*stack);
exit(EXIT_FAILURE);
}
return (0);
}
