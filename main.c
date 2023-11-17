#include "monty.h"

/*
*
*
*/

int main(int argc, char *argv[])
{ 
if (argc != 2)
{
fprintf(stderr, "Usage: monty file\n");
exit(EXIT_FAILURE);
}
get_op_file(argv[1]);
return (0);
}

