#include "3-calc.h"

/**
 * main - Entry point of program
 *
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n"), exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n"), exit(100);
	}
	printf("%d\n", func(num1, num2));
	return (0);
}
