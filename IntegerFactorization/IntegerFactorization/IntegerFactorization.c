#include <stdio.h>
#include <stdlib.h>

void factorize(int num)
{
	int divisor = 2;
	while (num > 1)
	{
		if (num % divisor != 0)
		{
			divisor++;
		}
		else 
		{
			printf_s("%5d", num);
			printf_s("|");
			printf_s("%d", divisor);
			printf_s("\n");

			num = num / divisor;
		}
	}
	printf_s("%5d", 1);
	printf_s("|");
}

int main()
{
	int inputNum;
	printf_s("Integer Factorizazion Calculator\n\n");
	printf_s("Please enter number:\n\n");
	scanf_s("%d", &inputNum);

	factorize(inputNum);

	return 0;
}
