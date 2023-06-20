#include "main.h"
/**
 *main - Entry for program printing alphabet in lowercase
 *
 *Return: Always 0 Success
*/
void print_alphabet(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
	{
		_putchar(lowcase);
	}
	_putchar('\n');
}

