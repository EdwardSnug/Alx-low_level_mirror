#include "function_pointers.h"
#include "3-calc.h"
/**
  *main - Entry for our program
  *
  *@argc: Argument count in out command terminal
  *@argv: String variables passed to our terminal as arguments/parameters
  *
  *Return: returns (0) Always success
  */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	oprt = get_op_func(argv[2]);
	num2 = atoi(argv[3]);
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprt(num1, num2));
	return (0);
}
