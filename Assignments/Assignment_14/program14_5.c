/*Write a program which accpet number from user and count frequency of such a digits which are less than 6
Input   :   2395
Output  :   3

Input   :   1018
Output  :   3

Input   :   9000
Output  :   3

Input   :   96672
Output  :   1

*/

#include<stdio.h>
int Count(int iNo)
{
    int Count = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        Count++;
        iNo = iNo / 10;
    }
    return Count;
}
int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = Count(iValue);
    printf("%d",bRet);

    return 0;
}