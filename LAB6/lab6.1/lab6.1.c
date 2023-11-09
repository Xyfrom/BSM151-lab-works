#include <stdio.h>

int gcd(int ,int);
int main()
{
int num1, num2;
    printf("enter the positive first number:");
    scanf("%d" ,&num1);
    printf("enter the positive second number:");
    scanf("%d" ,&num2);
    if(num1<=0 || num2<0)
    {
        printf("Both numbers must be positive integer");
    }
    int result=gcd(num1,num2);
    printf("the Greatest Common Divisor of %d and %d is %d" ,num1,num2, result);
    return 0;
}

int gcd(int a,int b)
{
    int smaller= (a<b)? a:b;
    int gcd;
    for (int i = 1; i <=smaller ; i++)
    {
     if(a%i==0 && b%i==0)
     {
         gcd=i;
     }

    }
    return gcd;
}
