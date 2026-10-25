#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    checkEven(iValue);

    if(iValue == true)
    {
        printf("Number is Even");
    }
    else 
    {
        printf("Number is odd");
    }

    return EXIT_SUCCESS;
}