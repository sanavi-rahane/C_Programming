//Check if number is divisible by 5 or not
#include<stdio.h>
#include<stdbool.h>
bool is_divisible_by_five(int number)
{
    if(number % 5 ==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);

    printf("%s\n",is_divisible_by_five(number) ? "Yes" : "No");
    return 0;
}