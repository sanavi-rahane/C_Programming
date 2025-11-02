//Write a program to print the multiplication tabl of a number
class Logic
{
    void MUltiplicationTable(int number)
    {
        int iCnt = 0;
        for(iCnt = 1;iCnt<=10;iCnt++)
        {
            System.out.printf("%d * %d = %d\n",iCnt,number,iCnt*number);
        }
    }
}
public class program17_5 {
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.MUltiplicationTable(5);
    }
}
