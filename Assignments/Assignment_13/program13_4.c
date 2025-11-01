//Find sum of first N natural numbers

#include<stdio.h>
int sum_natural_number(int limit)
{
    int iCnt = 0;
    int sum =0;
    for(iCnt = 1;iCnt <= limit;iCnt++)
    {
        sum=sum+iCnt;
    }
    return sum;
}
//Time Complexity : O(N)
int main()
{
    int limit;
    printf("Enter Limit : ");
    scanf("%d",&limit);
    printf("%d\n",sum_natural_number(limit));
    return 0;
}