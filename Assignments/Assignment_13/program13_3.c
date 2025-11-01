//print All  Odd number up to N
#include<stdio.h>
void print_odd_numbers(int limit)
{
    int iCnt =0 ;
    for(iCnt=1;iCnt<=limit;iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }
}
//TIme Complexity : O(N/2)
int main()
{
    int limit;
    printf("Enter Limit : ");
    scanf("%d",&limit);
    print_odd_numbers(limit);
    return 0;
}