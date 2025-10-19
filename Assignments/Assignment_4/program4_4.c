/*Write a program which accept number from user and return summation of all its non factors*/
#include<stdio.h>
int SumNonFactor(int iNo)
{
    int iCnt = 0;
    int sum = 0;
    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            sum = sum + iCnt;
        }
    }
    return sum;
}
//Time Complexity : O(N)
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = SumNonFactor(iValue);
    printf("Sum of Non Factor : %d ",iRet);
    return 0;
}