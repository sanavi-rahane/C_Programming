//Accept on number from user if number is less than 1o then print "hello"
// otherwise print "Demo".
#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else{
        printf("Demo");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}