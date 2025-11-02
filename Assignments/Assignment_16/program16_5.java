//Count number of digits in that number
class Logic
{
    void countDigits(int iNo)
    {
        int Count = 0,iDigits = 0;
        while (iNo != 0) {
            iDigits = iNo % 10;
            Count++;
            iNo = iNo / 10;
        }
        System.out.printf("%d",Count);
    }
}
public class program16_5 {
    public static void main(String[] args) {
         Logic obj = new Logic();
         obj.countDigits(7835);
    }
   
}
