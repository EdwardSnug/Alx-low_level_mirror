#include "main.h"
/**
  *_atoi - Function that converts a string to an integer
  *
  *@s String variable for conversion
  *
  *Return: Returns integer converted values or 0
  */
int _atoi(char *s)
{
	int converted, sign, i;

	i = 0;
	sign = 1;
	converted = 0;
	while (s[i] != '\0')
	{
		while (s[i] == ' ')
		{
			i++;
		}
		if (s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (s[i] == '+')
		{
			i++;
		}
		/*Convert the remaining characters to integer*/
		while (s[i] >= '0' && s[i] <= '9')
		{
			converted = converted * 10 + (s[i] - '0');
			i++;
		}
		return (converted * sign);
	}
	return (0);
}
