#include <math.h>
#include <stdio.h>
#include "func.h"


//Задание 2.1
double summ2(double eps)
{
    double a = 0;
    for (int i = 0; fabs(a) <= eps; i++)
    {
        a = a + pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
    }
    return a;
}
