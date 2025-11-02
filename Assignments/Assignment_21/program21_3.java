//Write a program to display all factor of number
class Logic{
    void DisplayFactor(int number)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt <= number/2;iCnt++)
        {
            if(number % iCnt == 0)
            {
                System.out.printf("%d\t",iCnt);
            }
        }
    }
}
public class program21_3 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.DisplayFactor(12);
    }
}
