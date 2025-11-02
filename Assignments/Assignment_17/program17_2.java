//Write a program to check whether a number is a palidrome or not
class Logic
{
    void checkPalidrome(int num)
    {
        int iNo = num;
        int reverse = 0;
        int digit = 0;
        while (num!=0) {
            digit = num % 10;
            reverse =reverse*10+digit;
            num = num /10;
        }
        if(iNo == reverse)
        System.out.println("Palidrome");
        else
        System.out.println("Not palidrome");
    }
}
public class program17_2 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.checkPalidrome(121);
    }
}
