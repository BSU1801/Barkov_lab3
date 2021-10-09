#include <math.h>
#include <stdio.h>
#include "func.h"
//Задание 3.2
void print(int n, int k)
{
	double a;
	int k1;
	k1 = k;
	int i = 0;
	while (i <= (n - 1))
	{
		a = pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
		if ((i + 1) == k)
		{
			k += k1;
			++i;
			continue;
		}
		else
		{
			printf(" Результат: %f\n", a);
		}
		++i;
	}
}
