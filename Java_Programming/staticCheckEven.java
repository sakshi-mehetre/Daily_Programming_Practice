import java.util.Scanner;

class staticCheckEven
{
    public static void Even(int iNo)
    {
        if(iNo % 2 == 0)
        {
            System.out.println("It is even number");
        }
        else
        {
            System.out.println("It is Odd number");
        }

    }

    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");
        iValue = scanner.nextInt();

        
        staticCheckEven.Even(iValue);

    }
}