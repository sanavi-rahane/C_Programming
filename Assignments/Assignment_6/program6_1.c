//Write a program which accept name from user and print that name

#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter Name :\n");
    scanf("%s",&name);
    printf("Your Name is %s",name);
    
    return 0;
}