    #include <stdlib.h>
    #include <stdio.h>


    void reverseArray(int *, int);
    void printArray(int*,int);

    int main()
    {   
        int array[5]={1,2,3,4,5};
        printArray(array,5);
        reverseArray(array,5);
        printArray(array,5);
        return 0;
    }


    void printArray(int *arr,int size )
    {
        int i;
        for(i=0;i<size;i++)
            printf("%d,",*(arr+i));
            printf("\n");
    }

    void reverseArray(int *arr,int size)
    {
        int *start=arr; // *start=&arr[0]
        int *end=arr+size-1;
        while (start<end)
        {
            int temp=*start;
            *start=*end;
            *end=temp;


        start++;
        end--;      
        }
        
    }