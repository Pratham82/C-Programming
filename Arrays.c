//Arrays
//Adding and averaging the grades entered into Arrays

#include <stdio.h>

int main()
{
    int grades [10];
    int count= 10;
    long sum =0;
    float average= 0.0f;

    printf("Enter 10 grades for sum and average:\n");

    for(int i=0; i<count; i++)
    {
        printf("%2u>",i+1);
        scanf("%d", &grades[i]);
        sum+=grades[i];
    }
    average= (float)sum/count;
    printf("The sum of numbers you have entered is: %li\n",sum);
    printf("The average of the number you have entered is: %f",average);

}
