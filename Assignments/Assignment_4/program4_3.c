/*Write a program which accept number from user and display all its non factors */
#include<stdio.h>
void NonFactor(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
//Time Complexity : O(N)
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    NonFactor(iValue);
    return 0;
}