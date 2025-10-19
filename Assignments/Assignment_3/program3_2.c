/*  Write a program which accept one number from user and print  even factor of that numbers on screen */

#include<stdio.h>
int DisplayFactor(int iNo)
{ 
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }   
    
}
//Time Complexity : O(N)
int main()
{
    int iValue = 0;
    printf("Enter a Number :\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;

}