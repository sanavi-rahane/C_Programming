/*Count total number of the factor  of number*/

#include<stdio.h>
int CountFactors(int iNo)
{
    int iCnt = 0,Count= 0;
    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    {
       if(iNo % iCnt == 0)
       {
         Count++;
       }
    }
}
//Time Complexity : O(N/2)
int main()
{
    int number = 0,iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&number);

    iRet = CountFactors(number);
    printf("%d",iRet);
    return 0;
}
