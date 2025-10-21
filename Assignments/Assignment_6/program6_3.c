//Write a program which accept two number from user and check whether number are equal or not
#include<stdio.h>
#include<stdbool.h>
bool CheckEqual(int Num1,int Num2)
{
    if(Num1 == Num2)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue1,iValue2;
    bool bRet =false;
    printf("Enter Number : \n");
    scanf("%d",&iValue1);
    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);
    bRet = CheckEqual(iValue1,iValue2);
    if(bRet == true)
    {
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }

    return 0;
}