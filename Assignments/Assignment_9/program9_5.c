 //Time Complexity :O(N)
/*Write  program which returns even factorial and odd factorial of given number
    Input :5
    Output :-7 (8-15)

    Input : -5
    Output : -7  (8-15)

    Input :10
    Output : 2895   (3840-945)
    */
 #include<stdio.h>
 int factorialDiff(int iNo)
 {
    if(iNo < 0)
    {
         iNo=-iNo;
    }
    int EFact = 1;
    int OFact = 1;
    int iCnt =0 ;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        EFact = EFact * iCnt;
        else
        OFact = OFact * iCnt;
    }
    return EFact - OFact;
 }
 //Time Complexity : O(N)
 int main()
 {
    int iValue = 0;
    int iRet = 0;
    printf("Enter NUmber : \n");
    scanf("%d",&iValue);
    iRet = factorialDiff(iValue);
    printf("Even Factorial of Number is %d",iRet);
    return 0;
 }
