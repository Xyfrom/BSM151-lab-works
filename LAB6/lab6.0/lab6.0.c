#include <stdio.h>

#define MAX_TRIES 5
#define PASSWORD 1234

int checkPasswordWithFor();
int checkPasswordWithWhile();
int checkPasswordWithDoWhile();


int main()
{

int success;
//success=checkPasswordWithFor();
//success=checkPasswordWithWhile();
success=checkPasswordWithDoWhile();

  if(success)
  {
      printf("Correct");
  } else
  {
      printf("Fail");
  }
    return 0;
}

int checkPasswordWithFor()
{
    int i ,userPassword;
    for(int i=0; i<MAX_TRIES; i++)
    {
        printf("Enter your password");
        scanf("%d" ,&userPassword);
        if(userPassword == PASSWORD)
            return 1;
    }
    return 0;
}


int checkPasswordWithWhile()
{

    int i=0, userPassword;
    while (i<MAX_TRIES)
    {
        printf("enter your password:");
        scanf("%d" ,&userPassword);
        if(userPassword==PASSWORD)
            return 1; // return userPassword
            i++;

    }
    return 0;
}

int checkPasswordWithDoWhile()
{
    int i=0 , userPassword;
    do {
        printf("enter your password:");
        scanf("%d", &userPassword);
        if (userPassword == PASSWORD)

            return 1; // retunr userPassword
        i++;

    }while (i<MAX_TRIES);
        return 0;

}