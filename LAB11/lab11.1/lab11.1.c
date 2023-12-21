#include<stdio.h>

int is_balanced(char str[]);
int is_rec_balanced(char str[], int i, int count);

int main()
{
printf("%d\n",is_balanced("()()()"));
printf("%d\n",is_balanced("(((())))"));
printf("%d\n", is_rec_balanced("(((())))", 0, 0));

}

int is_balanced(char str[])
{
    int count=0;
    for (int i=0; str[i]!='\0';i++)
    {
        if(str[i]=='(')
        {
            count++;
        }
        else if(str[i]==')')
        {
            count--;
        if (count<0)
        {
            return 0;
        }
        }
    }
    return count==0;
}



int is_rec_balanced(char str[], int i, int count)
{
    if (str[i] == '\0') 
    {
        return count == 0;
    }

    if (str[i] == '(')
    {
        return is_rec_balanced(str, i + 1, count + 1);
    } 
    if (str[i] == ')') 
    {
        count--;
    }
        if(count<0)
        {
        return 0;
        }
}    