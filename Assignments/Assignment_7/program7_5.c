/*WAP which accept  Number from user and print first 5 multiple of that number*/

#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 1;
    int Count = 1;
    while (Count <= 5)
    {
        if(iCnt % iNo == 0)
        {
            printf("%d\t",iCnt);
            Count++;
           
        }
        iCnt++;
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}