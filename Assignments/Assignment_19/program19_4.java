//Write a program to print each digit of a number seperately
class Logic
{
    void printDigits(int Number)
    {
        int iDigit = 0;
        while (Number != 0) {
            iDigit =  Number % 10;
            System.out.printf("%d\t",iDigit);
            Number = Number / 10;
        }
    }
}
//Time Complexity :O(N)
public class program19_4 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}
