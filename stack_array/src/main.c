#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
 *  An example of how to use strtol() to read a number
 *  and validate that one was entered correctly.
 *
 */

int
main(void)
{
  char buf[BUFSIZ];
  char *p;
  long int stack[MAX_SIZE];
  long int x;
  int i;
  int status = 0;

  printf ("Enter a number: ");

  for ( i = 0; i < MAX_SIZE; i++)
    {
      if (status > 0)
        break;

      if (fgets(buf, sizeof(buf), stdin) != NULL)
        {
          x = strtol(buf, &p, 10);

          if (buf[0] != '\n' && (*p == '\n' || *p == '\0'))
            {
              push(stack, x);
              print(stack);
            }
          else
            {
              printf ("Invalid number entered\n");
              status = 1;
            }
        }
    }
  pop(stack);
  print(stack);

  return(0);
}
