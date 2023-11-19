#include "monty.h"
/**
* _swap - adds the top two elements of the stack.
* @head: top of the stack
* @line_number: line_number
* Return: no return
*/
void _swap(stack_t **head, unsigned int line_number)
{
stack_t *tmp;
stack_t *tmp2;

int len = count_list(*head);

if (len < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short", line_number);
exit(EXIT_FAILURE);
}
tmp = *head;
tmp2 = tmp->next;
*head = tmp2;
tmp->next = tmp2->next;
tmp2->next = tmp;
}
