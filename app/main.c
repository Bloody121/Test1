#include <stdio.h>

#include "myfunc.h"

int main()
{
    values val;
    double a, b, c;

    printf("Введите коэффиценты a, b, c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    val = Func(a, b, c);

    if(val.count==2)
        printf("%.2lf, %.2lf\n", val.x1, val.x2);

    return 0;
}
