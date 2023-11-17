#include "monty.h"

/*
* line - instruction line
* stack - stack head
* line_number - line number of current instruction
*/

int exec(char *line, stack_t **stack, unsigned int line_number)
{
  int i = 0;
  char *token;
  char *opcode;
  char *delim = " \t\n";

  instruction_t instruct[] = {
                                  {"push", _push}, {"pall", _pall}
};
  token = strtok(line, delim);
  if (token && token[0] == '#')
  {
    return (0);
  }
  opcode = token;
  token = strtok(NULL, delim);
  arg = token;
  while (instruct[i].opcode && opcode)
    {
if (strcmp(opcode, instruct[i].opcode) == 0)
{
  instruct[i].f(stack, line_number);
}
      i++;
}
  return (0);
}