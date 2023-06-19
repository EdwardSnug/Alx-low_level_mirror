#include <stdio.h>
/**
 *main - Entry program to print all possible combinations for two digits
 *
 *Return: Always 0 Success
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			if (num1 != num2 && num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

