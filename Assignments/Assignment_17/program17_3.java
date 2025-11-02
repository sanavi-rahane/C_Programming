//Write a program to find the maximum of two numbers.
class Logic
{
    void findMax(int a,int b)
    {
        if(a > b)
        {
            System.out.printf("%d is greater",a);
        }
        else
        {
            System.out.printf("%d is greater ",b);
        }
    }
}
class program17_3
{
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.findMax(20,15);

    }
}