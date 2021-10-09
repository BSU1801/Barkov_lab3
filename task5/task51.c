#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 5.1
int findFirstNegativeElement(double esp)
{
    double a;
    int i1 = 0;
    _Bool flag = 0;
    for (int i = 0; flag == 0; ++i)
    {
        a = pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
        if (fabs(a) <= esp && a < 0)
        {
            i1 = i;
            flag = 1;
            return i1;
        }
        else
            continue;
    }
}
