//Challenge no. 6  Number guessing game
# include <stdio.h>
#include <stdlib.h>            //Standard library for random fucntion
#include <time.h>

int main()
{
    int numberEntered =0;                 //Declaration of entered number
    time_t t;
    srand((unsigned)time(&t));            //Initialization of random number
    int numberOfGuesses= 0;              //Declaration of entered number
    int randomNumber= rand()%21;         //Getting the random number

    printf("This is a guessing game\n");
    printf("I have chosen number between 0 to 20 which you must guess\n");

    for (numberOfGuesses=5; numberOfGuesses> 0; --numberOfGuesses)  //Number of guesses are 5
    {
        printf("\nNumber of %d tr%s remaining", numberOfGuesses, numberOfGuesses==1 ? "y":"ies");  //Applying ternary operator for using try and tries
        printf("\nEnter your guess:");                                //Print statement for entering the guess
        scanf("%d", &numberEntered);

        if(numberEntered == randomNumber)                            //Condition if the random number is equal to entered number
        {
            printf("Great the number you have entered is correct !\n");
            break;                                                    //Breaking the loop if the condition is true
        }
        else if(numberEntered< 0 || numberEntered > 20)              //Condition if the number is not between 0 to 20
        {
            printf("The number  entered is not between 0 to 20\n");
        }
        else if(randomNumber>numberEntered)                          //Condition if the random numebr is greter than entered number
        {
            printf("Sorry %d is wrong, Correct number is greater than this, try again\n",numberEntered);
        }
        else if(randomNumber<numberEntered)                           //Condition if the random numebr is leaser than entered number
        {
            printf("Sorry %d is wrong, Correct number is lesser than this, try again \n",numberEntered);
        }
    }
    printf("The number of tries has been exceeded. The number was this %d\n", randomNumber); //Print statement for exceeded tries
    return 0;
}