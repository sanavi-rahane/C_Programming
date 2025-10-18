#include<stdio.h>
//Non facotors
void DisplayNonfactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
//Time Complexity : O(N)

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayNonfactor(iValue);
    return 0;
}