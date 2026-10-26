import java.util.Scanner;

class Average
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0, iAns = 0;

        System.out.println("Enter first number:");
        iValue1 = scanner.nextInt();

        System.out.println("Enter Second number:");
        iValue2 = scanner.nextInt();

        iAns = AverageNumber.Avg(iValue1,iValue2);

        System.out.println("Average is:"+iAns);
    }
}

class AverageNumber
{
    public static int Avg(int iNo1, int iNo2)
    {
        int iAvg = 0;
        iAvg = ((iNo1 + iNo2) / 2);
        return iAvg;
    }
    
}