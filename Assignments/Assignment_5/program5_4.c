//Check Positive negative and Zero NUmber

#include<stdio.h>
void CheckNumberType(int Num)
{
    if(Num == 0)
    {
        printf("Number is Zero");
    }
    else if(Num > 0)
    {
        printf("Number Is Positive ");
    }
    else{
        printf("Number is Negative");
    }
}
int main()
{
    int Number;
    printf("Enter Number : \n");
    scanf("%d",&Number);
    CheckNumberType(Number);
    return 0;
}