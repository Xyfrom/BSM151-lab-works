#include <stdio.h>


/*DO NOT CHANGE THE FUNCTION SIGNATURES.*/
int substractDays(int, int, int, int, int, int);
double calculateLateFee(int);


int main(void)
{
    //DO NOT CHANGE ANYTHING IN MAIN FUNCTION
    
    // below are for the date that the user borrowed the book    
    int dueDay, dueMonth, dueYear;
    // below are for the date that the user returned the book    
    int returnDay, returnMonth, returnYear;
    // day difference between two dates
    int dayDifference;
    // late fee will be returned to lateFee variable
    double lateFee;

    printf("enter due date DD MM YY: ");//Enter dates in the following format  12 12 2023
    scanf("%d%d%d", &dueDay, &dueMonth, &dueYear);

    printf("enter return date DD MM YY: ");//Enter dates in the following format 12 5 2023
    scanf("%d%d%d", &returnDay, &returnMonth, &returnYear);

    // call the substractDays function
    dayDifference = substractDays(dueDay, dueMonth, dueYear, returnDay, returnMonth, returnYear);
    // call the calculateLateFee function and get the lateFee
    lateFee = calculateLateFee(dayDifference);
    // display the output
    printf("You are late %d days and your late fee is %.3lf.", dayDifference, lateFee);
    return 0;
}

// NOW, IMPLEMENT THE FUNCTION
/*
    substractDays function accepts six parameters:
    the first three are for the day, month, and year of the 
    first date, the last three are for the day, month and year 
    of the second day.
    Your goal is to substract the second date from the first date
    and find the number of days in between.

    If you call the substractDays(10, 11, 2023, 15, 11, 2023),
    the day difference is 5. 

    Suppose a month is 30 days, and a year is 360 days. 
    So for call like substractDays(14, 12, 2023, 15, 10, 2025), 
    dayDifference => 15 - 14 = 1
    monthDifference => 10 - 12 = -2 
    yearDifference => 2025 - 2023 = 2
    total day difference is dayDifference + 30 * monthDifference + 360 * yearDifference, 
    which yields to 661.

    IMPORTANT.
    Make sure that the due date is before the return date. In such an occurence, the function
    should return 0. For example, a call such as substractDays(10, 12, 2023, 8, 10, 2023) should
    return 0 because the book is returned before its due date. So, before calculating the day
    difference, check if the due date is indeed before the return date.


*/
int substractDays(int dueDay, int dueMonth, int dueYear, int returnDay, int returnMonth, int returnYear)
{
    if(dueDay>30 || returnDay>30 || dueMonth>12 || returnMonth>12)
  {
     printf("enter a valid date\n\n");   
     printf("enter due date DD MM YY: ");
     scanf("%d%d%d", &dueDay, &dueMonth, &dueYear);

     printf("enter return date DD MM YY: ");
     scanf("%d%d%d", &returnDay, &returnMonth, &returnYear);

    return substractDays(dueDay, dueMonth, dueYear, returnDay, returnMonth, returnYear);
  }
    else
  {
    
      if (returnYear - dueYear <= 0 && returnMonth - dueMonth <= 0 && returnDay - dueDay <= 0)
      {
          return 0;
      }
      else
      {
          return ((returnYear - dueYear) * 360) + (30 * (returnMonth - dueMonth)) + (returnDay - dueDay);
      }
  }
    
}


// NOW, IMPLEMENT THE FUNCTION
/*
    calculateLateFee function accepte a single paremeter and calculates
    the relevant lateFee with the folloing late fee policy.

    if a book is returned less than or equal to 5 days, the late is 10 liras for each day.
    if a book is returned more than 6 days but within 15 days (15 is included in the range), 
    the late fee is 10 liras per day for the first 5 days and 15 liras per day for the remaining days.
    if a book is returned more than 16 days but within 30 days (30 is included in the range),
    the late fee is 15 liras per day for the first 15 days (including)and 20 liras per day for the remaining days.
    if a book is returned more than 30 days, the late is 20 liras for each day with no exception.
    
    IMPORTANT NOTE:
    daysLate parameter cannot be less than 0, if it is 0. It means that the book returned on time.
*/

double calculateLateFee(int dayslate)
{
int lateFee;


if (dayslate<=0)
  {
    printf("ucret yoktur\n");
    return 0 ;
  }
  
  else if(dayslate>0 &&dayslate<=5)
  {
      lateFee=dayslate*5;
  }
  else if(dayslate>5 && dayslate<=15)
  {
      lateFee=((dayslate-5)*15)+50;
  }
  else if(dayslate>15 && dayslate<=30)
  {
      lateFee=((dayslate-15)*20)+200;
  }
  else 
  {
    lateFee=((dayslate-30)*30)+500;
  }
  
  

    return  lateFee ;

}
