#include "monty.h"
/**
* _push - pushes a node to the stack
* top - top of the stack
* line_number - line number of current instruction
*/
void _push(stack_t **top, unsigned int line_number)
{
int i = 0, argg;

if (arg)
{
if (arg[0] == '-')
{
i++;
}
{
if (arg[i] < '0' || arg[i] > '9')
{
fprintf(stderr,"L%d: usage: push integer", line_number);
exit(EXIT_FAILURE);
}
argg = atoi(arg);
addnode(top, argg);
}
}


}