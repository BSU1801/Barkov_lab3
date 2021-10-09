#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 4.1
int findFirstElement(double esp)
{
    double a;
    int i1 = 0;
    _Bool flag;
    flag = 1;
    for (int i = 0; flag == 1; ++i)
    {
        a = pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
        if (fabs(a) <= esp)
        {
            i1 = i;
            flag = 0;
            break;
        }
        else
            continue;

    }
    return i1;
}
