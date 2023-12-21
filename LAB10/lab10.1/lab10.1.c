#include <stdio.h>
#include <string.h>
# include <stdlib.h>
#include <time.h>

#define STRSIZE 20

void assingStringRandomly(char [], int);
void reverseString(char []);


int main() {
    char str [STRSIZE+1];
    srand(time(NULL)); 
    assingStringRandomly(str, STRSIZE);
    printf("original string: %s\n", str);
    reverseString(str);
    printf("reversed string: %s\n", str);
    
    return 0;
}
    
void assingStringRandomly(char str [], int nChars)
{
    int i = 0;
    while(i <= nChars)
    {
        // assign a random letter between a-z
        str[i] = 'a' + rand() % (1 + 'z' - 'a');
        i++;
    }
    str[i] = '\0';
}

void reverseString(char str[])
{
    int front = 0, back = strlen(str) - 1;
    while(front < back)
    {
        char temp = str[front];
        str[front] = str[back];
        str[back] = temp;
        front++;
        back--;
    }
}
