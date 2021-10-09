#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 3.3
void print(int n, int k)
{
	double a; int k1 = k, i = 0;
	if (n != 0)
	{
		do
		{
			a = pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
			if ((i + 1) == k)
			{
				k += k1; ++i; continue;
			}
			else
			{
				printf(" Результат: %f\n", a);
			}
			++i;
		} while (i <= (n - 2));
	}
	else
	{
		printf("a = 0 \n");
	}
}
