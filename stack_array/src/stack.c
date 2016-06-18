#include <stdio.h>

#define MAX_SIZE 101

int top = -1;

void push(int *a, int n)
{
  if (top == MAX_SIZE -1)
    {
      printf("Error: stack overflow\n");

      return;
    }

  a[++top] = n;
}
