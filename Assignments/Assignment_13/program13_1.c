//print All number from 1 N
#include<stdio.h>
void print_numbers(int limit)
{
    int iCnt =0 ;
    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
//TIme Complexity : O(N)
int main()
{
    int limit;
    printf("Enter Limit : ");
    scanf("%d",&limit);
    print_numbers(limit);
    return 0;
}