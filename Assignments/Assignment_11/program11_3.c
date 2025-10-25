/*Write a program which accept the range from user 
and display addition of all number between that range
.range should contain posive numbers only

Input : 23 30
Output: 212

Input :10 18
Output :126

Input :10 10
Output :10

Input : -10 2
Output : Invalid range

Input :90 18
Output :Invalid range*/
#include<stdio.h>
int RangeSum(int iStart,int iEnd)
{
    int iCnt =0;
    int Sum = 0;
   
       for(iCnt = iStart;iCnt <= iEnd ;iCnt++)
       {
            Sum = Sum+iCnt;
       }
       return Sum;
}
    
    
//Time Complexity : O(N)
int main()
{
    int iValue1= 0,iValue2= 0,iRet;
    printf("Enter Starting Point : \n");
    scanf("%d",&iValue1);
    printf("Enter Ending Point : \n");
    scanf("%d",&iValue2);
    if(iValue1 > iValue2|| iValue1 < 0 || iValue2 < 0)
    {
        printf("InValid Range");
    }
    else
    {
        iRet = RangeSum(iValue1,iValue2);
        printf("Addition is %d ",iRet);
    }
   
    return 0;
       
}
