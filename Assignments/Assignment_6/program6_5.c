//Write a program which accept total marks and obtained marks from user and calculate percentage

#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
    float percent = 0;
    percent = (iNo1/iNo2)*100;
    return percent;
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("please enter total marks\n");
    scanf("%d",&iValue1);
    printf("please enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Perecentage is %d",fRet);
    return 0;
}