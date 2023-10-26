#include<stdio.h>

float calc_abs(float);

int main()

{

float n;
printf("enter n:");
scanf("%f" ,&n);
printf("|%.3f| = %.3f \n", n, calc_abs(n));
return 0;
}
float calc_abs(float n)
{
if(n>=0)
{
    return n;
}
return -n;
}

