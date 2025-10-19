//Accept one number from user and print that number of * on screen
#include<stdio.h>
void printStar(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a Number\n");
    scanf("%d",&iValue);
    printStar(iValue);
    return 0;
}