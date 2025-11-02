//Write a program to find the maximum of two numbers.
class Logic
{
    void findMax(int a,int b,int c)
    {
        if(a > b && a > c)
        {
            System.out.printf("%d is greater",a);
        }
        else if(b > c)
        {
            System.out.printf("%d is greater ",b);
        }
        else
        {
                       System.out.printf("%d is greater ",c);

        }
    }
}
class program17_4
{
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.findMax(3,7,2);

    }
}