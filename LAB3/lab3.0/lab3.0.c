#include<stdio.h>



int main()
{
    double miles,km;
    const double f =1.6093;
    printf("enter miles");
    scanf("%lf",&miles);
    km=miles*f;
    printf("%.3lf miles is %.3lf km" ,miles,km);
    return 0;










}