//Write a program to check whether the number is divisible by 5 and 11 or not

class Logic{
    void checkDivisible(int number)
    {
        if(number % 5 == 0 && number % 11 == 0)
        {
            System.out.printf("%d is divisible by 5 and 11",number);
        }
        else
        {
            System.out.printf("%d is not divisible by 5 and 11",number);

        }
    }
}
public class program19_3 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}
