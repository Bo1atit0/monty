#include "monty.h"
/**
* addnode - add node to the head stack
* @top: top of the stack
* @n: new_value
* Return: no return
*/

void addnode(stack_t **top, int n)
{
stack_t *newnode;

newnode = (stack_t *)malloc(sizeof(stack_t));
if (newnode == NULL)
{
printf("Error\n");
exit(0);
}
newnode->n = n;
if (*top != NULL)
{
newnode->next = *top;
(*top)->prev = newnode;
newnode->prev = NULL;
}
else
{
newnode->prev = NULL;
*top = newnode;
}
}