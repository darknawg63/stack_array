#include <stdio.h>
#include <stdlib.h>

/*
 *  An example of how to use strtol() to read a number
 *  and validate that one was entered correctly.
 *
 */

#define MAX_SIZE 12

void print(long int a[], int count);

int 
main(void)
{
  char buf[BUFSIZ];
  char *p;
  long int stack[MAX_SIZE];
  long int x;
  int i;

  printf ("Enter a number: ");

  for ( i = 0; i < MAX_SIZE; i++)
    {
      if (fgets(buf, sizeof(buf), stdin) != NULL)
        {
          x = strtol(buf, &p, 10);

          if (buf[0] != '\n' && (*p == '\n' || *p == '\0'))
            {
              printf ("Valid number of %ld entered\n", x);
              stack[i] = x;
            }
          else 
            {
              printf ("Invalid number entered\n");

              return (1);
            }
        }
    }
  print(stack, i);

  return(0);
}

void print(long int a[], int count)
{
  int i;

  for ( i = 0; i < count; i++)
      printf("%ld ", a[i]);
  printf("\n");

}

