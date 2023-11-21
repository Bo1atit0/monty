#include "monty.h"
/**
* _pint - prints the top
* @top: stack head
* @line_number: line_number
* Return: no return
*/
void _pint(stack_t **top, unsigned int line_number)
{

if (*top != NULL)
{
printf("%d\n", (*top)->n);
}
else
{
fprintf(stderr, "L%d: can't pint, stack empty", line_number);
exit(EXIT_FAILURE);
}
}
