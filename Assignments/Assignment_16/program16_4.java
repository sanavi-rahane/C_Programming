//Write a program to reverse number
class Logic
{
    void reverceNumber(int iNo)
    {
        int iDigit = 0 ;
        while (iNo != 0) {
            iDigit = iNo % 10;
            System.out.printf("%d",iDigit);
            iNo = iNo / 10;
        }
    }
}
public class program16_4 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.reverceNumber(1019);
    }
}
