//Write a program to find the factorial of a number using a for loop.
class Logic{
    void findFactorial(int num)
    {
        int iCnt = 0,Fact = 1;
        for(iCnt = 1;iCnt <=num;iCnt++)
        {
            Fact = Fact * iCnt;
        }
        System.out.printf("%d",Fact);
    }
}
public class program16_3 {
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
    
}
