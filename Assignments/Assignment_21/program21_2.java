//Write a program to count even and odd number are present in between 1 to N
class Logic{
    void countEvenOddRange(int N)
    {
        int iCnt =0;
        int ECount =0 ,OCount =0;
        for(iCnt =1;iCnt<=N;iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                ECount++;
            }
            else
            {
                OCount++;
            }
        }
        System.err.printf("Even Count : %d\nOdd Count : %d",ECount,OCount);
    }
}
public class program21_2 {
    public static void main(String[] args) {
        Logic obj =new Logic();
        obj.countEvenOddRange(50);
    }
}
