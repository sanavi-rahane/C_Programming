//Write a program to print the number from N to doen to 1 in reverse order
class Logic
{
    void printreverse(int number)
    {
        int iCnt= 0;
        for(iCnt = number;iCnt>=1;iCnt--)
        {
            System.out.printf("%d\t",iCnt);
        }
    }
}
public class program20_2 {
    public static void main(String[] args) {
        Logic obj = new Logic();
    obj.printreverse(10);
    }
}
