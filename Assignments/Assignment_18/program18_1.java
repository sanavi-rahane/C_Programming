//Write a progra to check whether the number is prime or not
class Logic
{
    void checkprime(int num)
    {
        int iCnt = 0;
        int fact = 0;
        for(iCnt = 2;iCnt <num/2;iCnt++)
        {
            if(num % iCnt == 0)
            {
                fact = 1;
            }           
        }
        if(fact == 0)
        {
            System.out.println("it is  prime");

        }
        else
        {
            System.out.println("it is  not prime");
        }

    }
}
//Time Complexity : O(N/2)
public class program18_1 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.checkprime(12);
    }
}
