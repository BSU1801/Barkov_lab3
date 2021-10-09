#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 1.1
double summ(int n)
{
	double a = 0;
	for (int i = 0; i <= (n - 1); ++i)
	{
		a = a + pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
	}
	return a;
}
