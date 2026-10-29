//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Summation
// Input         : Integer
// Output        : Integer
// Description   : Sum of 1 to N number
// Date          : 28/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number: \n");
    scanf("%d", &iValue);

    iRet = Summation(iValue);

    printf("sum of number is : %d\n",iRet);

    return EXIT_SUCCESS;
}