//Write a program to print all odd number up to N
class Logic
{
    void printOdd(int num)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt<= num;iCnt+=2)
        {
            System.out.printf("%d\t",iCnt);
        }
    }
}
//Time Complexity : O(N)
public class program18_3 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.printOdd(10);
    }
}
