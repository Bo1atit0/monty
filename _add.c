#include "monty.h"

/**
* _add - adds first two nodes
* @top: top of the stack
* @line_number: not used
* Return: void
*/

void _add(stack_t **top, __attribute__((unused)) unsigned int line_number)
{
stack_t *h = *top;
stack_t *temp = (*top)->next;
int res, lent = count_list(h);

if (lent < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
fclose(gv.file);
free(gv.line);
free_stack(*top);
exit(EXIT_FAILURE);
}
res = h->n + temp->n;
temp->n = res;
*top = temp;
free(h);
}
