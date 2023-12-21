        #include <stdlib.h>
        #include <stdio.h>

        void concatenateStrings(char *, const char *);            

        int main()
        {   
        
            char str1[100], str2[50];
            
            printf("Enter the first string");
            scanf("%s" ,str1);
            printf("Enter the second string");
            scanf("%s" ,str2);
            concatenateStrings(str1,str2);
            printf("concatenateStrings: %s" ,str1);
            return 0 ; 
            
        }

        void concatenateStrings(char *dest, const char *src)
        {
            while (*dest!='\0')
            {
                dest++;
            }
            while (*src!='\0')
            {
                *dest=*src;
                dest++;
                src++;
            }
            
            *dest='\0';
            
        }