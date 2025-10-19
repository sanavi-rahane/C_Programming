/*Write a program which accept number from user and return difference between summation of all its factor non factors*/
#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int SumFactor = 0;
    int SumNonFactor = 0;
    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            SumFactor = SumFactor + iCnt;
        }
        else
        {
            SumNonFactor =SumNonFactor + iCnt;
        }
    }
    return (SumFactor - SumNonFactor);
}
//Time Complexity : O(N)
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf("Factor difference : %d ",iRet);
    return 0;
}