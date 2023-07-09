#include <stdio.h>
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
/**
  *main - Entry for program calculating product
  *
  *@argc: Command line arguments count
  *@argv: 1d array string of the given cmd line arguments
  *
  *Return: returns (1) and Prints 'Error' if there are no two argument integers
  */
int main(int argc, char *argv[])
{
	int i;
	int product, num1, num2;

	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	if (argc > 1 && argc <= 3)
	{
		i = 0;
		product = 1;
		while (i <= argc)
		{
			product = num1 * num2;
			i++;
		}
	}
	printf("%d\n", product);
	return (0);
}
