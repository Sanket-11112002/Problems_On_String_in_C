/*
1. Write a program which displays ASCII table. Table contains symbol, 
Decimal, Hexadecimal and Octal representation of every member from 
0 to 255.

*/
#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("ASCII table\n");
    printf("symbol\tDecimal\t Hexadecimal\t  octal\n");
    for(iCnt = 0; iCnt<=255; iCnt++)
    {
        printf("%c\t%d\t\t%02x\t\t%03o\n",iCnt,iCnt,iCnt,iCnt);
    }
    printf("************\n");
}

int main()
{
    DisplayASCII();

    return 0;
}