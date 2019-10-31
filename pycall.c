/***gcc -o libpycall.so -shared -fPIC pycall.c*/
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
  return a + b;
}
