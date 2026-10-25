#include<stdio.h>
#include<stdlib.h>

int Addition(int iNo1, int iNo2)
{
    int Result = 0;
    Result = iNo1 + iNo2;
    return Result;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0;

    printf("Enter the first number : \n");
    scanf("%d", &iValue1);

    printf("Enter the second number : \n");
    scanf("%d", &iValue2);

    iAns = Addition(iValue1,iValue2);

    printf("Addition of two number is: %d\n", iAns);

    return EXIT_SUCCESS;
}