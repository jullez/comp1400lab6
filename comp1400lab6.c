//Part 1
//a) It will create the output "1*3*9*27*81*" ASSUMING the variable i was declared as an integer before, otherwise the program willr result in an error
//b) This programw ill result in an error due to xnot being declared as an integer and a missing curly bracket in the else statement
//should both of these issues be fixed, the program will output:
//"11---12---13---14---15
//16---17---18---19---20"

//c) "4-6
//5-5"

//d) "20"

//e) will infinitely list numbers decreasing from 5

//f)"Sum of 1 to 5 is 15"




#include <stdio.h>
#include <stdlib.h>//imports relevant libraries
int main() {
    int guess;//creaters the guess variable which takes in user input
    int goal = rand() % 50 + 1;//creates the random number
    int solved=0;//a "boolean" variable, checks if the user guessed the number correctly

    for(int i=0;i<10;i++) {//loop for the game, will only repeat 10 times
        printf("You have %d tries left! Enter your guess:\n", 10 - i);//asks the user for their input
        scanf("%d", &guess);//assigns the integer input to the variable guess
        //both lines above are repeated with every iteration allowing the user to make multiple guesses

        if (guess < 0 || guess > 50) {//if guess is out of range
            printf("Value out of range, keep it between 0 and 50\n");//displays an appropriate message
            i--;//and doesn't subtract from the user's tries
        }

        else if (guess < goal) {//if the user's guess was smaller than the goal number
            printf("%d is too low!\n", guess);//displays a tip
        }

        else if (guess > goal) {//if the user's guess was higher than the goal number
            printf("%d is too high!\n", guess);//displays a tip
        }
        else {//if none of the above conditions are fulfilled (i.e. if the number the user entered is the goal number
            printf("%d is correct! It took you %d tries to get it right.\n", guess, i + 1);//displays an appropriate message
            solved=1;//updates the "boolean" (flag) variable
            i = 11;//sets sentinel value to 11, immidiately ending the loop

        }
    }

    if (solved==0){//if the flag wasn't triggered (the user hasn't won)
        printf("Sorry! The number was %d",goal);//prints a message revealing what the goal number was
    }

    return 0;
}