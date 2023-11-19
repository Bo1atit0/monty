#include "monty.h"
glo_v gv = {NULL, NULL, NULL};

/**
* main - main file
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
get_op_file(argv[1]);

return (0);
}

