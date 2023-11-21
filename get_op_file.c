#include "monty.h"

/**
* get_op_file - gets opcode
* @file: monty  file to read
* Return:  void
*/

void get_op_file(char *file)
{
FILE *f;
char *line;
size_t size = 0;
ssize_t read = 1;
unsigned int count = 0;
stack_t *stack = NULL;
stack_t *temp;

f = fopen(file, "r");
if (f == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", file);
exit(EXIT_FAILURE);
}

while (read > 0)
{
line = NULL;
read = getline(&line, &size, f);
gv.line = line;
count++;

if (read > 0 || (read == 0 && line[0] != '\n'))
{
/*printf("Line %d: %s", count, gv.line);*/
exec(gv.line, &stack, count);
}

free(line);
}
while(stack)
{
temp = stack;
stack = stack->next;
free(temp);
}
fclose(f);
}
