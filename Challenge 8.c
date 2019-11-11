//Checking the yearly total and yearly average and monthly average rainfall for the 5 years of data
#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12                    //Defining MONTHS
#define YEARS 5                      //Defining YEARS

int main()
{
    // initialize rainfall data for 2011-2015
    float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    int year, month;
    float subtot, total;

    printf("YEAR\t\tRAINFALL  (inches)\n");

    //Yearly Average rainfall for all the years

    for (year = 0, total = 0; year < YEARS; year++)                             //Going through years(Rows) until the 5th year
    {
        for(month = 0, subtot = 0; month < MONTHS; month++)                    //Going through months(Columns) until th 12th month
        {
            subtot += rain[year][month];                                       //Add the subtotal, total for each year
        }
        printf("%5d \t%15.1f\n", 2010 + year, subtot);
        total += subtot;                                                       //Total for all years
    }

    printf("\nThe yearly average is %.1f inches.\n\n",total/YEARS);

    //Monthly average rainfall for all the years from 2010-2014

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)                                  //Going through each months(column) until the 12th month
    {
        for (year = 0, subtot = 0; year < YEARS; year++)                     //Going through years(Rows) until the 5th year
            subtot += rain[year][month];

        printf("%4.1f ", subtot/YEARS);
    }

    printf("\n");

    return 0;
}
