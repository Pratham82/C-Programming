//Challenge no 7 Checking the prime numbers from 0-100

#include <stdio.h>
#include <stdlib.h>                  //Standard library
#include <stdbool.h>                 //Used for implementation of bool

int main()
{
    int p;                           //Counter for outer loop
    int i;                           //Counter for outer loops

    int primes[50] ={0};             //Prime array declaration
    int primeIndex=2;                //prime index used to skip all the even no.

    bool isPrime;

    primes[0]=2;                     //Initializing 2,3 first prime numbers
    primes[1]=3;

    for(int p=5; p<=100; p= p+2)     //Outer loop this loop will skip the even numbers form 5 to 100
    {
        isPrime= true;

        for(i=1; isPrime && p/primes[i] >= primes[i]; ++i)       //Inner loop that goes through all the prime numbers  & checks if the value is greter than square root
        if (p % primes[i] ==0 ){                                  //If the no is divided by primes values and divided completely
            isPrime=false;                                        //Then the number is not a prime number
        }

        if(isPrime == true){                                      //If the number is prime number
            primes[primeIndex] =p;                                //Add the number to the prime number index starting with p=5
            ++primeIndex;                                         //Incrementing the value of prime index
        }

}
        for(i=0; i<primeIndex; ++i)                               //Starting from the primeindex
        printf("%i \n" , primes[i]);                               //

        printf("\n");
    return 0;
}
