//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Divisible
// Input         : Integer
// Output        : Integer
// Description   : Check divisiblity 
// Date          : 28/10/2026
// Author        : Sakshi Dnyaneshwar Mehetre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Divisible(int iNo)
{
    if(iNo % 5 == 0 && iNo % 3 == 0)
    {
        printf("It is divisible by 5 & 3");
    }
    else
    {
        printf("It is not divisible by 5 & 3");
    }

}


int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    Divisible(iValue);

    return EXIT_SUCCESS;
}