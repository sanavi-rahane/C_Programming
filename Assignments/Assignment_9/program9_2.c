/*Accept amount in US dollar and return its corresponding value in Indian currency Consider 1$ as 70 rupees.
    Input :10
    Output : 700

    Input : 3
    Output : 270

    Input :1200
    Output : 
*/

#include<stdio.h>
int DollarToINR(int iNo)
{
    return iNo * 70;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number of USD\n");
    scanf("%d",&iValue);
    
    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);
    return 0;
}
