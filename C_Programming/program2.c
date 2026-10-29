//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ReverseNumber
// Input         : Integer
// Output        : Integer
// Description   : print reverse number from N to 1
// Date          : 28/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void ReverseNumber(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    ReverseNumber(iValue);

    return EXIT_SUCCESS;
}