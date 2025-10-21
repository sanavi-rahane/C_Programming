//Check Leap year

#include<stdio.h>
void CheckLeap(int yr)
{
    if(yr % 4 == 0)
    {
        printf("%d is Leap year",yr);
    }
    else{
        printf("%d is not leap year",yr);
    }
}
int main()
{
    int year;
    printf("Enter year : \n");
    scanf("%d",&year);

    CheckLeap(year);

    return 0;
}