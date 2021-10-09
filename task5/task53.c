#include <math.h>
#include <stdio.h>
#include "func.h"

//Задание 5.3
int findFirstNegativeElement(double esp)
{
    double a;
    int i = 0;
    int i1 = 0;
    _Bool flag = 0;
    if (esp = !0)
    {
        do
        {
            a = pow(-1, i) * (1 - (pow(i, 2) + 1)) / (pow(i, 2) + 3);
            if (fabs(a) <= esp && a < 0)
            {
                i1 = i;
                flag = 0;
                return i1;
            }
            i++;
        } while (flag == 1);
    }
}
