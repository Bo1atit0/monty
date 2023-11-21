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
/* printf("newnode createdn");*/
if (newnode == NULL)
{
printf("Error\n");
exit(0);
}

newnode->n = n;
newnode->next = *top;
newnode->prev = NULL;

if (*top != NULL)
{
(*top)->prev = newnode;
}
*top = newnode;
}

