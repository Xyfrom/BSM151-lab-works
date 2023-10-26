#include<stdio.h>

char convertGrade(float);

int main()
{

float numberGrade;
char letterGrade;
printf("Enter your number grade:");
scanf("%f",&numberGrade);
letterGrade=convertGrade(numberGrade);
printf("%f number grade is %c \n" , numberGrade, letterGrade);
return 0;
}
char convertGrade(float n)  
{
    char letterGrade;
    if(n>=0 && n<1.0)
    {
        letterGrade='F';
    }
    else if(n<2.0)
    {
       letterGrade='D'; 
    }
    else if(n<2.5)
    {
        letterGrade='C';
    }
    else if(n<3.0)
    {
        letterGrade='B';
    }
    else
    {
        letterGrade='A';
    }
    return letterGrade;
}