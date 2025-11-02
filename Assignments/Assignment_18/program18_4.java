//Write a program to find the sum of even and odd digits seperately in a number
class Logic
{
    void SumEvenOddDigits(int Number)
    {
        int SEven= 0,SOdd= 0,iDigit = 0;
        while (Number != 0) {
            iDigit = Number % 10;
            if(iDigit % 2 == 0)
            SEven+=iDigit;
            else
            SOdd+=iDigit;
            Number = Number / 10;
        }
        System.out.printf("Sum of Even Digits Of an Number is : %d\n",SEven);
        System.out.printf("Sum of Odd Digits Of an Number is : %d",SOdd);


    }
}
//Time Complexity :O(N)
public class program18_4 {
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}
