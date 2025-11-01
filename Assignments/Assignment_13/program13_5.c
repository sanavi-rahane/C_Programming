//Find sum of first N  Even natural numbers

#include<stdio.h>
int sum_even_number(int limit)
{
    int iCnt = 0;
    int sum =0;
    for(iCnt = 2;iCnt <= limit;iCnt=iCnt+2)
    {
        sum=sum+iCnt;
    }
    return sum;
}
//Time Complexity : O(N/2)
int main()
{
    int limit;
    printf("Enter Limit : ");
    scanf("%d",&limit);
    printf("%d\n",sum_even_number(limit));
    return 0;
}