#include "main.h"
/**
  * _isupper - uppercase letters
  @c: Placeholder for character to be checked
  *
  *Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
