/*Write a program which accept number from user return 
difference between summation of even digits and summation of odd digits
Input   :   2395
Output  :   -15     (2-17)

Input   :   1018
Output  :   6       (8-2)

Input   :   8440
Output  :   16      (16-0)

Input   :   5733
Output  :   -18     (0-18)
*/

#include<stdio.h>
int Countdiff(int iNo)
{
    int Esum = 0,Osum = 0;
    int iDigit = 0;
    if(iNo < 0)
    iNo = -iNo;
    while (iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        Esum = Esum + iDigit;
        else
        Osum = Osum + iDigit;
        iNo = iNo / 10;

    }
    return Esum - Osum;
    
}
//Time Complexity  : O(N)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = Countdiff(iValue);
    printf("%d",iRet);
    return 0;
}