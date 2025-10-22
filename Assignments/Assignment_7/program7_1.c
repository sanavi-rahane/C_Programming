/*Write a program which accept one number input from user and print that number of $ and * on screen*/
#include<stdio.h>
void pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}