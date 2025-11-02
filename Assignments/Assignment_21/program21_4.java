//Write a program to count number of factor of given number
class Logic
{
    void countFactor(int number)
    {
        int Count = 0,iCnt =0;
        for(iCnt =1;iCnt<=number/2;iCnt++)
        {
            if(number  % iCnt == 0)
            {
                Count++;
            }
        }
        System.out.printf("%d",Count);
    }
}
public class program21_4 {
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.countFactor(20);
    }
}
