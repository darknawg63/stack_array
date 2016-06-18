#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>

#define MAX_SIZE 101

void push(long int *a, long int n);
int *pop(long int *a);
void print(long int *a);
long int Top(long int *a);

#endif
