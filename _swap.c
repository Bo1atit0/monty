#include "monty.h"
/**
* _swap - adds the top two elements of the stack.
* @head: top of the stack
* @line_number: line_number
* Return: no return
*/
void _swap(stack_t **head, unsigned int line_number)
{
stack_t *h;

int len = count_list(*head), temp;

if (len < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n",
line_number);
fclose(gv.file);
free(gv.line);
free(*head);
exit(EXIT_FAILURE);
}
h = *head;
temp = h->n;
h->n = h->next->n;
h->next->n = temp;
}

