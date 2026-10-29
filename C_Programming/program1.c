//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Input         : Integer
// Output        : Integer
// Description   : print number from 1 to N
// Date          : 28/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}