#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 2.3
double summ2(double eps)
{
    double a = 0;
    int i = 0;
    if (eps != 0)
    {
        do
        {
            a = a + pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
            ++i;
        } while (fabs(a) <= eps);
    }
    return a;
}
