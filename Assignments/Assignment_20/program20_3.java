//write a program to check whether the number is pergect number or not
class Logic{
    void checkperfect(int number)
    {
        int iCnt = 0;
        int sum =0;
        for(iCnt = 1;iCnt<=number/2;iCnt++)
        {
            if(number % iCnt ==0)
            {
                sum+=iCnt;
            }
        }
        if(sum  ==  number)
        {
            System.out.println("Perfect NUmber");
        }
        else{
            System.out.println("Not Perfect Number");
        }
    }
}
public class program20_3 {
    public static void main(String[] args) {
        Logic obj =new Logic();
    obj.checkperfect(28);
    }
}
