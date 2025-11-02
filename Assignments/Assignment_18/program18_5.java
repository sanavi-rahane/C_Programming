//Write a program to check whethr the number positive or negative or zero
class Logic
{
    void CheckSign(int number)
    {
        if(number == 0)
        {
            System.out.println("Number is Zero");
        }
        else if(number > 0)
        {
            System.out.println("Number is Positive");
        }
        else
        {
            System.out.println("Number is Negative");
        }
    }
}
public class program18_5 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.CheckSign(-8);
    }
}
