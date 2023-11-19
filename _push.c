#include "monty.h"
/**
* _push - pushes a node to the stack
* top: top of the stack
* line_number: line number of current instruction
* Return: void
*/
void _push(stack_t **top, unsigned int line_number)
{
int i = 0;
int argg;

if (gv.arg == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

if (gv.arg[0] == '-')
{
i++;

while (gv.arg[i] != '\0')
{
if (gv.arg[i] < '0' || gv.arg[i] > '9')
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
i++;
}
}
argg = atoi(gv.arg);

addnode(top, argg);
}
