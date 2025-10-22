//Write a program which accept total marks and obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float percent = 0.0;
    percent = ((float)iNo2 / iNo1) * 100;
    return percent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is %.2f%%\n", fRet);

    return 0;
}
