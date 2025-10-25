/*Write a program which radius of circle from user and calculate its area.Consider value of PI as 3.14

Input : 5.3
Output  : 88.2026

Input : 10.4
Output : 339.6229
*/


#include<stdio.h>
double CircleArea(float fRadious)
{
    return 3.14*fRadious*fRadious;
}
int main()
{
    float fValue = 0.0;
    double dRet =0.0;
    printf("Enter Radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is : %f",dRet);
    return 0;
}