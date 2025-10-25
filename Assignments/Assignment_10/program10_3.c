/*Write a program which accept distance in kilometre and convert it into meter(1 kilometre = 1000 meter)
Input : 5
Output :5000

Input :112
Output : 12000*/
#include<stdio.h>
int ConvertMeter(int iNo)
{
    return iNo*1000;
}
int main()
{
    int iValue = 0,iRet =0.0;


    printf("Enter Distance : \n");
    scanf("%d",&iValue);
    iRet = ConvertMeter(iValue);
    printf("%d Meter",iRet);
    return 0 ;

}