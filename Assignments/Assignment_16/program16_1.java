//Write a program to calculate the sum of first N Natural Numbers.
class Logic
{
    void calculateSum(int N)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1; iCnt <=N; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        System.out.printf("%d",iSum);
    }
}
class program16_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculateSum(2);
    }
}