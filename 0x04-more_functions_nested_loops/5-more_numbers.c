#include "main.h"
/**
  *more_numbers - Prints 0 to 14 ten times
  */
void more_numbers(void)
{
	int i;
	int n;

	n = 1;
	while (n <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar (i);
		}
		_putchar ('\n');
		n++;
	}
}
