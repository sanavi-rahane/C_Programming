//Write a program which accept one number from user and check whether that number is grater than 100 or not

#include<stdio.h>
#include<stdbool.h>
bool CheckGreater(int Num)
{
    if(Num > 100)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue =0;
    bool bRet =false;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    bRet = CheckGreater(iValue);
    if(bRet == true)
    {
        printf("Greater");
    }
    else{
        printf("Smaller");
    }

    return 0;
}