#include<stdio.h>

int ackermann(int, int);

int main()
{
printf("%d\n", ackermann(2,0));
return 0;    
}

int ackermann(int m, int n)
{
    if (m==0)
{
    return n+1;
}    
    if (m>0 && n==0)
{ 
    return ackermann(m-1,1);
}
    if (m>0 && n>0)
{ 
    return ackermann(m-1,ackermann(m,n-1));    
}
}