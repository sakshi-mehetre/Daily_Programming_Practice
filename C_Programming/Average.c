#include<stdio.h>
#include<stdlib.h>

int Average(int iNo1 , int iNo2)
{
    int iAvg = 0;
    iAvg = ((iNo1 + iNo2) / 2);
    return iAvg;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0;

    printf("Enter the First number: \n");
    scanf("%d", &iValue1);

    printf("Enter the Second number: \n");
    scanf("%d", &iValue2);

    iAns = Average(iValue1,iValue2);

    printf("Average is : %d\n",iAns);

    return EXIT_SUCCESS;
}