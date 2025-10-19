/*Write a program which accept Number from user and display its multiplication of factors*/
#include<stdio.h>
int MultiFact(int iNo)
{
    int iCnt = 0;
    int Multi = 1;
    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ",iCnt);
            Multi = Multi * iCnt;
        }
    }
    return Multi;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    iRet = MultiFact(iValue);
    printf("\nMultiplication of Factors of %d is :\n %d",iValue,iRet);
    return 0;
}