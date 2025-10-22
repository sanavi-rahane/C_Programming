/*Write  program to find even factorial of number
    Input :5
    Output :8 (4*2)

    Input : -5
    Output : 8  (4*2)

    Input :10
    Output : 3840 (10*8*6*4*2)
    */
 #include<stdio.h>
 int EvenFact(int iNo)
 {
    if(iNo < 0)
    {
         iNo=-iNo;
    }
    int Fact = 1;
    int iCnt =0 ;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        Fact = Fact * iCnt;
    }
    return Fact;
 }
  //Time Complexity :O(N)

 int main()
 {
    int iValue = 0;
    int iRet = 0;
    printf("Enter NUmber : \n");
    scanf("%d",&iValue);
    iRet = EvenFact(iValue);
    printf("Even Factorial of Number is %d",iRet);
    return 0;
 }
