//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactor
// Input         : Integer
// Output        : Integer
// Description   : display factors of number
// Date          : 28/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("Factors are : %d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("enter the number: \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}