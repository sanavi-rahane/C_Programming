//Write a program to calculate the sum of all even number up to n
class Logic 
{
    void SumEvenNumber(int limit)
    {
        int iCnt = 0;
        int sum=0;
        for(iCnt =2;iCnt<=limit;iCnt+=2)
        {
            sum+=iCnt;
        }
        System.out.printf("%d",sum);
    }
}
public class program20_1 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.SumEvenNumber(10);
    }
}
