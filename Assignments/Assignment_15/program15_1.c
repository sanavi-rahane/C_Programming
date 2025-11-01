/*Write a program which accept number from user and return count of even digits.

Input : 2395
Output : 1

Input : 1018
Output :2

Input :-1018
Output : 2

Input : 8462
Ouput : 4



*/
#include<stdio.h>
int CountEven(int iNo)
{
    int Count = 0;
    int iDigit = 0;
    if(iNo < 0)
    iNo = -iNo;
    while (iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        Count++;
        iNo = iNo / 10;

    }
    return Count;
    
}
//Time Complexity  : O(N)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("%d",iRet);
    return 0;
}