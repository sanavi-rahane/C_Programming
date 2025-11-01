//Sum of all factor of a number
#include<stdio.h>
int sum_of_factors(int number)
{
    int sum;
    for(int i=1;i<=number;i++)
    {
        if(number%i== 0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main(void)
{
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    printf("%d\n",sum_of_factors(number));
    return 0;
}


/*
Version               	Meaning                     	Modern use
int main(void)	 Main takes no arguments	        ✅ Recommended (C99 and later)
int main()	     Main takes unspecified arguments	⚠️ Works, but not best practice
*/