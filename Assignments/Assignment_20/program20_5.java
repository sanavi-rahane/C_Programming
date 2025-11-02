//Write a program  to find smallest digit in given number
class Logic
{
    void findSmallestDigit(int number)
    {
        int smallest = number % 10;
       int iDigit = 0;
       
        while (number != 0) {
            iDigit = number % 10;
            if(smallest > iDigit)
            smallest = iDigit;
            number = number /10;
        }
        System.out.printf("%d",smallest);
    }
} 
public class program20_5 {
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.findSmallestDigit(458172);
    }
}
