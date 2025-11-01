/*Write a program which accept number from user and check whether it contains 0 in it or not

Input   :   2395
Output  :   There is no Zero

Input   :   1018
Output  :   It Contains Zero

Input   :   9000
Output  :   It Contains Zero

Input   :   10687
Output  :   It Contains Zero

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;  //bool now bwhave like int
BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return 1;
        }
        iNo = iNo / 10;

    }
    return 0;
    
}
//Time Complexity : O(N)
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}