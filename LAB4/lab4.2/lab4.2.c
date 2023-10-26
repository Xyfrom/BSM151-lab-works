#include<stdio.h>
float calculate_tax(float);

int main()
{
float income,tax;
printf("yearly income:");
scanf("%f" ,&income);
tax=calculate_tax(income);
printf("your yearly income is %f and your related tax is %f" ,income,tax);
return 0;
}

float calculate_tax(float income)
{
    float tax=0.0;
    if(income>0 && income<15000.0)
    {
        tax=income*.15;
    }
    else if(income<30000.0)
    {
        tax=(income-15000)*.18+2250;
    }
    else if(income<50000.0)
    {
        tax=(income-30000)*.2+5400;
    }
    else if(income<80000.0)
    {
        tax=(income-50000)*.27+11000;
    }
    else if(income>=80000.0)
    {
        tax=(income-80000)*.33+21600;
    }
    return tax;
}