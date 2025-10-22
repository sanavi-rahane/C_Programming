/*Write a program which accept number from user and display below pattern
    Input : 5
    Output : * * * * * # # # # #

    Input : 6
    Output : * * * * * * # # # # # #

    Input : -5
    Output : * * * * * # # # # #

    Input : 2
    Output : * * # #
*/

#include<stdio.h>
void Display(int iNo) //5
{
    int iCnt = 0;
    for(iCnt=1;iCnt<iNo;iCnt++) //N
    {
        printf("*\t");
    }
     for(iCnt=1;iCnt<iNo;iCnt++) //N
    {
        printf("#\t");
    }
}
//Time Complexity = O(2N)
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}