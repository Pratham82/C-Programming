//Challenge N09 Functions
//
#include <stdio.h>

int GCD(int x, int y);
int LCM(int x,int y);
float absolutevalue(float x1);
float squareRoot(float x2);

int main()
{

    int result1;
    float result2=0.0;
    float result3=0.0;
    int result4;

    result3=squareRoot(49);
    float f1= -45.20;
    result1=GCD(150,35);
    result2=absolutevalue(f1);
    result4=LCM(150,35);

    printf("The square root of 49 is: %.2f\n",result3);
    printf("The absolute value for -45 is:%.2f\n\n", result2);
    printf("GCD of two numbers 150 and 35 is:%d\n", result1 );
    printf("LCM of two numbers 150 and 35 is:%d\n", result4 );
}

//Function for GCD of two numbers
int GCD(int x, int y){

    while(x!=y){
        if(x>y)
            x-=y;
        else
            y-=x;
    }
    return x;
}

//Function for LCM of two numbers
int LCM(int x, int y){
    int z= x*y/GCD(x,y);
    return z;
}

//Function for finding square root
float squareRoot(float x2){
    const float epsilon= .00001;
    float guess= 1.0;
    float returnValue= 0.0;

    if (x2 < 0)
    {
        printf("Negative argument to squareroot. \n");
        returnValue =-1.0;
    }
    else{
        while(absolutevalue(guess * guess - x2)  >=epsilon)
        guess=(x2/guess + guess)/2.0;
        returnValue =guess;
    }

    return returnValue;
}

//Function for the absolute value
float absolutevalue(float x1){
    if (x1<0)
    x1 = -x1;

    return x1;
}

