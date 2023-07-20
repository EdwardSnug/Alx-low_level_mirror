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
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/**
	  *'47' - ASCII value for '\'
	  *'37' - ASCII value for '%'
	 */
	if ((*op == 47 && num2 == 0) || (*op == 37 && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
