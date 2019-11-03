// Operators
#include <stdio.h>

int main()
{
    int x=30;
    int y=15;

    _Bool a= 1;
    _Bool b= 1;
    int a1=a&&b;
    int a2=a||b;
    int a3= !(a&&b);

    int z= x+y;
    int z1= x%y;


    printf("The addition of x and y is: %d\n", z);
    printf("The modulous of x and y is: %d\n", z1);
    printf("The increment of x is: %d\n", x++);
    printf("The increment of x is: %d\n", ++x);
    printf("A && B is: %d\n", a1);
    printf("A || B is: %d\n", a2);
    printf("!(A &&B) is: %d\n", a3);

}