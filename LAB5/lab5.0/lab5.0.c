
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double draft(double,double);

int main()
{
    srand(time (NULL));
double withdrawal;
double balance= (rand() %4001)+1000;
printf("welcome to my bank\n Enter amount to withdrawal: $");
scanf("%lf" ,&withdrawal);
printf("\n your balance is %.3lf\n" ,balance);
double balance2=draft(balance,withdrawal);
printf("your balance is %.3lf after withdrawal\n" ,balance2);
return 0;
}

double draft (double balance, double withdrawal)
{
    if (withdrawal<=balance)
    {
        printf("sufficient amount \n");
        balance=balance-withdrawal;
    }
    else if (withdrawal<=balance*1.1)
    {
        printf("you are getting an %.3lf overdraft..\n" ,withdrawal-balance);
        balance=balance-withdrawal;
    }
    else
    {
        printf("insufficient amount..\n");
    }
    return balance;
    
}
