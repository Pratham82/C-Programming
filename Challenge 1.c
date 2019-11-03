//Challenge 1 Area and Perimeter of reactangle
#include <stdio.h>

int main()
{

    int h= 12;
    int w= 15;
    int peri= 2*(h+w);
    int area= h*w;

    printf("Height: %d, width: %d \n", h ,w);
    printf("Perimeter of rectangle is: %d \n", peri);
    printf("Area of rectangle is: %d \n", area);

    return 0;

}