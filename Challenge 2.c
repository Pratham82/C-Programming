//Challenge 2 Creating enum for companies and print out variables for specific company names
# include <stdio.h>

int main()
{
    enum company{GOOGLE, FAEBOOK, XEROX,YAHOO,EBAY,MICROSOFT};
    enum company comp1, comp2, comp3;
    comp1= XEROX;
    comp2= GOOGLE;
    comp3= EBAY;
    printf(" Value of Xerox is: %d\n Value of google is: %d\n Value of Ebay is: %d\n", comp1, comp2,comp3);

}
