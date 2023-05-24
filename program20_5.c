/*
5. Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM

*/
#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(((ch >= 'A') && (ch <= 'D')) || ((ch >= 'a') && (ch <= 'd')))
    {
            if((ch == 'A') || (ch == 'a'))
            {
                printf("Your exam at 7 AM\n");
            }
            else if((ch == 'B') || (ch == 'b'))
            {
                printf("Your exam at 8.30 AM\n");
            }
            else if((ch == 'C') || (ch == 'c'))
            {
                printf("Your exam at 9.20 AM\n");
            }
            else if((ch == 'D') || (ch == 'd'))
            {
                printf("Your exam at 10.30 AM\n");
            }
                
    }
    else
    {
        printf("Enter valid division\n");
        return;
    }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter your division A,B,C,D:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}