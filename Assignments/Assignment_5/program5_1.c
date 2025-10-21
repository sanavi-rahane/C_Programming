//Check Even And Odd

#include<stdio.h>
void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("NUmber is Even");

    }
    else
    {
        printf("Number is Odd");
    }
}
int main()
{
    int number;
    printf("Enter Number : \n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;

}