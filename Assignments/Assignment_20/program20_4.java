//Write a program to find largest digits in a given number
class Logic{
    void findLargestNumber(int number)
    {
        int largest = 0;
        int iDigit = 0;
        while (number != 0) {
            iDigit = number % 10;
            if(largest < iDigit )
            largest = iDigit;
            number = number /10;
        }
        System.out.printf("%d",largest);
    }
}
public class program20_4 {
    public static void main(String[] args) {
        Logic obj= new Logic();
        obj.findLargestNumber(82439);
    }
}
