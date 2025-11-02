//Write a program to find sum of digits of a number

class Logic
{
    void sumOfDigits(int num)
    {
        int sum = 0,iDigit = 0;
        while (num != 0) {
            iDigit = num  % 10;
            sum = sum + iDigit;
            num =num /10;
        }
        System.out.printf("%d",sum);
    }
}
public class program17_1 {
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}
