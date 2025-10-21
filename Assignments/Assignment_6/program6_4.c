//Write a program which accept three number and print its multiplication
#include<stdio.h>
int Multiply(int x,int y,int z)
{
    if(x || y || z == 0)
    {
        return 0;
    }
    return (x*y*z);
}
int main()
{
    int iValue1,iValue2,iValue3,Result;
    printf("Enter three Number : \n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    Result = Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is %d",Result);
    return 0;
}