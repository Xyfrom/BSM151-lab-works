#include <stdio.h>
void printPrimeFactors(int);

int main()
{
int number;
printf("Enter a positive integer:");
scanf("%d",&number);
if (number<=0)
{
    printf("Please enter a positive integer \n");
    return 1;
}
printPrimeFactors(number);
return 0;

}

void printPrimeFactors(int number)
{
int factor=2;
while (number>1)
{
    if (number%factor==0)
    {
        printf("%d\n",factor);
        while (number%factor==0)
        {
            number/=factor;
        }
        
    }
    factor++;
    if (factor*factor>number)
    {
        if (number>1)
        {
            printf("%d\n", number);
            break;
        }
        
    }
    
}



}