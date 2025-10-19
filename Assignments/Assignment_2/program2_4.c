// Accept two number from user and display first number in second number of times.
// Test Cases :
//------------------------------------
//  Input : 12 5
//  Output : 12 12 12 12 12
//
//  Input : -2 3
//  Output : -2 -2 -2
//
//  Input : 21 -3
//  Output : 21 21 21
//
//  Input : -2 0
//  Output : 
// ------------------------------------

#include<stdio.h>
void Display(int iNo ,int iFrequency)
{
    //updator
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}


int main()
{
    int iValue = 0, iCount = 0;
    printf("Enter First Number : \n");
    scanf("%d",&iValue);

    printf("Enter Second Number : \n");
    scanf("%d",&iCount);
    
    Display(iValue,iCount);
    return 0;
}