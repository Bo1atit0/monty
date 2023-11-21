#include "monty.h"
/**
*free_stack - frees stack
*@stack: stack to free
*Return: void
*/

void free_stack(stack_t *stack)
{
stack_t *temp;

while(stack)
{
temp = stack;
stack = stack->next;
free(temp);
}
}