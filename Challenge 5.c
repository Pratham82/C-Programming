//Challenge no.5 Weekly Pay calculator
# include <stdio.h>

    int main()
    {
        int HoursWorked= 0;
        double OverTime= 0;
        double taxes= 0.0;
        double GrossPay= 0.0;
        double NetPay= 0.0;

        printf("Enter the number of hours that you have worked this week:\n");
        scanf("%d", &HoursWorked);

        if(HoursWorked<=40)
            GrossPay= HoursWorked * 12;
        else
        {
            GrossPay= HoursWorked * 12;
            OverTime= (HoursWorked-40)*18;
            GrossPay+=OverTime;
        }

        if(GrossPay<=300)
        {
            taxes= GrossPay *0.15;
        }
        else if(GrossPay>300 && GrossPay<450)
        {
            taxes= 300* 0.15;
            taxes+= (GrossPay-300)*0.20;
        }
        else if(GrossPay>450)
        {
            taxes= 300* 0.15;
            taxes+= (GrossPay-300)*0.20;
            taxes+= (GrossPay-450)*0.25;
        }

        NetPay= GrossPay- taxes;

        printf("Your Gross pay for this week is: %f\n",GrossPay);
        printf("Your taxes for this week is: %f\n", taxes);
        printf("Your net pay for this week is: %f\n",NetPay);
    }
