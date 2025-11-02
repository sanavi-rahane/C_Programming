//Write a program to check whethr the year is leap year or not
class Logic
{
    void CheckLeapyear(int Year)
    {
        if(Year % 4 == 0)
        {
            System.out.printf("%d is leap year",Year);
        }
        else
        {
            System.out.printf("%d is not leap year",Year);
        }
    }
}
public class program19_1
{
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.CheckLeapyear(2024);
    }
}