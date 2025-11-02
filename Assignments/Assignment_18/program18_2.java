//Write a program to print all even number up to N

class Logic
{
    void printEven(int num)
    {
        int iCnt = 0 ;
        for(iCnt=2;iCnt<= num;iCnt+=2)
        {
            System.out.printf("%d\t",iCnt);
        }
    }
}
//Time Complexity : O(N)
public class program18_2 {
    public static void main(String[] args) {
          Logic obj = new Logic();
    obj.printEven(10);
    }
  

}
