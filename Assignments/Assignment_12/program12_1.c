/*print all the factor  of number*/

#include<stdio.h>
void print_Factors(int iNo)
{
    int iCnt = 0;
    for(iCnt =1;iCnt <=iNo/2;iCnt++)
    {
       if(iNo % iCnt ==0)
       {
         printf("%d\t",iCnt);
       }
    }
}
//Time Complexity : O(N/2)
int main()
{
    int number = 0;
    printf("Enter Number : ");
    scanf("%d",&number);

    print_Factors(number);
    return 0;
}
