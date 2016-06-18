#include <stdio.h>

#define MAX_SIZE 101

int top = -1;

void push(long int *a, long int n)
{
  if (top == MAX_SIZE -1)
    {
      printf("Error: stack overflow\n");

      return;
    }

  a[++top] = n;
}

void print(long int *a)
{
  int i;

  for ( i = 0; i <= top; i++)
      printf("%ld ", a[i]);
  printf("\n");

}
