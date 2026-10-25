import java.util.Scanner;

class Addition 
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0, iAns = 0;

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter Second number : ");
        iValue2 = scanner.nextInt();

        Arithmatic arithmatic = new Arithmatic();

        iAns = arithmatic.addition(iValue1, iValue2);

        System.out.println("Addition of two number is :"+iAns);
    }
}

class Arithmatic
{
    public int addition(int iNo1, int iNo2)
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }
}