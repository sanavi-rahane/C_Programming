//Write a program to calculate the power of a number
class Logic
{
    void calculatePower(int base,int Exponent)
    {
        int iCnt = 0,power = 1;
        for(iCnt =1;iCnt<=Exponent;iCnt++)
        {
            power = power*base;
        }
        System.out.printf("%d",power);
    }
}
public class program19_5 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}
