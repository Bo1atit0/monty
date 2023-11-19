#include "monty.h"

/**
* _pall - prints the stack
* @top: top of the stack
* @line_number: not used
* Return: void
*/

void _pall(stack_t **top, __attribute__((unused)) unsigned int line_number)
{
stack_t *head;
head = *top;

if (head == NULL)
{
return;
}
while (head != NULL)
{
/* printf("pall while loop\n");*/
printf("%d\n", head->n);
head = head->next;
}
}
