//Write a program to print all number between 1 to N which id divisible by both 2 and 3 
class Logic{
    void printDivisible2and3(int number)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt<=number;iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.printf("%d\t",iCnt);
            }
        }
    }
}
public class program21_5 {
    public static void main(String[] args) {
        Logic obj =new Logic();
        obj.printDivisible2and3(30);
    }
}
