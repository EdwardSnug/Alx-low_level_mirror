#include "main.h"
/**
  *leet - A function that encodes a string into 1337
  *
  *@ch: Array of characters to be encoded
  *
  *Return: returns string characters and those encoded.
  */
char *leet(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] == 'a' || ch[i] == 'A')
		{
			ch[i] = '4';
		}
		else if (ch[i] == 'e' || ch[i] == 'E')
		{
			ch[i] = '3';
		}
		else if (ch[i] == 'o' || ch[i] == 'O')
		{
			ch[i] = '0';
		}
		else if (ch[i] == 't' || ch[i] == 'T')
		{
			ch[i] = '7';
		}
		else if (ch[i] == 'l' || ch[i] == 'L')
		{
			ch[i] = '1';
		}
		else
		{
			ch[i] = ch[i];
		}
		i++;
	}
	return (ch);
}

