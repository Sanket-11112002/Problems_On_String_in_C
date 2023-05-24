/*
5. Write a program which accept string from user reverse that string 
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”

*/
#include<stdio.h>
#define ERR_NOTFOUND -1

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0'; 

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    
}

int main()
{
   char Arr[20];

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr);

   strrevX(Arr);

    printf("Modified string is:%s",Arr);

    return 0;
}
