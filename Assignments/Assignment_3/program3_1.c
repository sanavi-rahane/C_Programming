/*  Write a program which accept one number from user and print that number of even numbers on screen */

#include<stdio.h>
int PrintEven(int iNo)
{ 
    int iCnt =0;
    if(iNo <= 0)
    {
        return 0;
    }
    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt*2);
    } 

    
    
}
//Time Complexity : O(N)
int main()
{
    int iValue = 0;
    printf("Enter a Number :\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;

}