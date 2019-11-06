#include <stdio.h>
int main()
{
    int num1;
    int remainder;

    printf("Enter the number for division:\n");
    scanf("%i", &num1);

    remainder= num1%2;

    if(remainder == 0)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("Entered numebr is odd");
    }
}
