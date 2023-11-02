#include<stdio.h>
void reportTheWeather(float,float);
int main()
{
    float temperature,humidity;
    printf("enter the current temperature in degress celcius");
    scanf("%f" ,&temperature);
    printf("enter the current humidity level (0-100):");
    scanf("%f" ,&humidity);
    reportTheWeather(temperature,humidity);
    return 0;
}

void reportTheWeather(float temperature,float humidity)
{
    if (temperature>25.0 && humidity<70.0)
    {
        printf("the weather is Sunny");
    }
    else if (temperature<10.0)
    {
        printf("the weather is Cold");
    }
    else if (temperature>10.0 && temperature<=25.0)
    {
        if (humidity>80.0)
        {
            printf("the weather is Rainy");
        }
        else if (humidity>70.0 && humidity<=80.0)
        {
            printf("the weather is partly cloudy");
        }
        else
        {
            printf("the weather is Foggy");
        }
        
    }
    else
    {
        printf("the weather is Foggy");
    }
    
    
}

