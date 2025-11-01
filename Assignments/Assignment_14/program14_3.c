/*Write a program which accpet number from user and count frequency of 2 in it

Input   :   2395
Output  :   1

Input   :   1018
Output  :   0

Input   :   9000
Output  :   0

Input   :   922432
Output  :   3

*/

#include<stdio.h>
int CountTwo(int iNo)
{
    int Count = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        Count++;
        iNo = iNo / 10;
    }
    return Count;
}
//Time Complexity : O(N)
int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);
    printf("%d",bRet);

    return 0;
}