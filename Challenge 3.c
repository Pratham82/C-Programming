//Challenge no. 3 COnvert minutes to years and days
# include <stdio.h>

int main()
{
    int min=0;
    double minInYears= 0.0;
    double days= 0.0;
    double years= 0.0;

    printf("Enter the no. of minutes to be converted:");
    scanf("%d", &min);
    double minInYears= 525600;
    years= (min/minInYears);
    days= (min/60/24) ;
    printf("The converted years are: %f",years);
    printf("The converted days are: %f", days);

    return 0;

}
