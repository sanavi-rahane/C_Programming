//Write a program to find factoeial of given number
#include<stdio.h>
int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
        int Fact = 1;
        int iCnt = 0;
        for(iCnt = iNo;iCnt > 1;iCnt--)
        {
            Fact = Fact * iCnt;
        }
        return Fact;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("Factoral of Number is %d",iRet);
    return 0;
}