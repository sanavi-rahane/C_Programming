/*Write a program which accept number from user return 
multiplication of all digits.

Input   :   2395
Output  :   270

Input   :   1018
Output  :   8

Input   :   9440
Output  :   144

Input   :   922432
Output  :   846
*/

#include<stdio.h>
int MultDigits(int iNo)
{
    int iMul = 1;
    int iDigit = 0;
    if(iNo < 0)
    iNo = -iNo;
    while (iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
            iMul = iMul * iDigit;
        iNo = iNo / 10;

    }
    return iMul;
    
}
//Time Complexity  : O(N)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);
    return 0;
}