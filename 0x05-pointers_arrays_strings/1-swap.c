#include "main.h"
/**
  *swap_int - swaps the value of two integers
  *
  *@a: integer value one
  *@b: integer value two
  */
void swap_int(int *a, int *b)
{
	a = *&b;
	b = *&a;
}
