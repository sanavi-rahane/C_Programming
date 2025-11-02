//Write a program to calculate the product of digits of number
class Logic
{
    void ProductOfDigits(int number)
    {
        int product =1;
        int iDigit =0;
        while (number != 0) {
            iDigit = number % 10;
            product=product * iDigit;
            number =number/10;
        }
        System.out.printf("%d",product);
    }
}
class program21_1
{
    public static void main(String[] args) {
        Logic obj=new Logic();
        obj.ProductOfDigits(234);
    }
}