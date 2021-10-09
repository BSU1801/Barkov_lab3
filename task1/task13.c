#include <math.h>
#include <stdio.h>
#include "func.h"

//задание 1.3
double summ(int n)
{
    double a;
    int i = 0;
    a = 0;
    if (n != 0)
    {
        do
        {
            a = a + pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
            ++i;
        } while (i <= (n - 1));
    }
    return a;
}
