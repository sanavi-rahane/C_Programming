#include<stdio.h>
int FindMax(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int iNum1,iNum2,result;
    printf("Enter First Number : \n");
    scanf("%d",&iNum1);

    printf("Enter Second Number : \n");
    scanf("%d",&iNum2);

    result = FindMax(iNum1,iNum2);

    printf("Maximum number is %d ",result);
    return 0;
}