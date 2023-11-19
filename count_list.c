#include "monty.h"
/**
* count_list - counts number of elements
* @top: top of stack
* Return: number of elements
*/


int count_list(stack_t *top)
{
int count = 0;

while (top != NULL)
{
count++;
top = top->next;
}
return (count);
}