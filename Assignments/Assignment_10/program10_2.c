/*Write a program which accept widht and height of re=ectangle from user and calculate its area (Area = Width * Height)
Input : 5.3  9.78
output : 51.834
*/
#include<stdio.h>
double RectArea(float fWidth ,float fHeight)
{
    return fWidth*fHeight;
}
int main()
{
    float fValue1 =0.0,fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Widht: \n");
    scanf("%f",&fValue1);

    printf("Enter height :\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Ractangle Area is %f ",dRet);
    return 0;
}