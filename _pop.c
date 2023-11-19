#include "monty.h"
/**
* _pop - prints the top
* @head: stack head
* @line_number: line_number
* Return: no return
*/
void _pop(stack_t **head, unsigned int line_number)
{
stack_t *tmp;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
free(*head);
exit(EXIT_FAILURE);
}
tmp = *head;
*head = (*head)->next;
free(tmp);
}
