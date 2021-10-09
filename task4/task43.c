#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 4.3
int findFirstElement(double esp)
{
    double a;
    int i = 0;
    int i1 = 0;
    _Bool flag;
    flag = 1;
    if (esp != 0)
    {
        do
        {
            a = pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
            if (fabs(a) <= esp)
            {
                i1 = i;
                flag = 0;
                break;
            }
            ++i;
        } while (flag == 1);
    }
    return i1;
}
