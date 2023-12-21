#include <stdio.h>

void swap(int, int);
void swapWPtr(int *, int *);

int main()
{
    int a,b;

    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);  
    swap(a,b),
    printf("After swap\n a: %d  b:%d ",a,b);
    swapWPtr(&a,&b);
    printf("After swapwptr\n a: %d  b:%d ",a,b);

    return 0;
}
void swap (int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}

void swapWPtr(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
