#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 3.1
void print(int n, int k)
{
	double a;
	int k1;
	k1 = k;
	for (int i = 0; i <= (n - 1); ++i)
	{
		a = pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
		if ((i + 1) == k)
		{
			k += k1;
			continue;
		}
		else
		{
			printf(" Результат: %f\n", a);
		}
	}
}
