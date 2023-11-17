#include "monty.h"

/*
* get_op_file - gets opcode
* file - file to read
*/

void get_op_file(char *file)
{
FILE *f;
char *line = NULL;
size_t size = 0;
ssize_t read;
unsigned int count = 0;

f = fopen(file, "r");
if (f == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", file);
exit(EXIT_FAILURE);
}

while (read > 0)
{

read = getline(&line, &size, f);
count++;
if (read > 0)
{
exec(line, NULL, count);
}
}
free(line);
fclose(f);
}
