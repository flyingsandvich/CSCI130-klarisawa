/*
Name  Kodama Arisawa
Date  11/8/2022

this program will promt users to guess a random number from 1-20 and will tell the user if the guessed the corrrect number
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
using namespace std;

int num, guess, tries = 0;

void randomNumber(){                                // function that creates the random number
       // int num, guess, tries = 0;
    srand(time(0)); 
    num = rand() % 20 + 1; 
}

void guessCheck(){                                      // function that tells if the number is to high low or correct
            if (guess > num)
            cout << "Too high!\n\n";
        else if (guess < num)
            cout << "Too low!\n\n";
        else
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
     

}


void game(){                    // Game Function

    tries = 0;
    randomNumber();
    do    {
//cout << num;
       cout << "Enter a guess between 1 and 20 : ";
        cin >> guess;
        tries++;
        
       // for(int i = 1; i < 7; i++ ){
        guessCheck();
    

       if(tries > 6){
           cout << "You failed, try again...\n\n";
           
       }
       if (guess == num){
          break;
       }
    } while ( tries <= 6);




}
int main(){

    // promt user for name
        string first;
    string last;
    string full;

    cout << "Enter your first and last name" << endl;
    cin >> first >> last;
    full = first + " " + last;
    
    cout << "Welcome "<< full << " to the number guessing program.\n\n" ;
   

int imput;
//loops game function and resets try counter unless the exit is selected

        while(imput != 2){

            game();

            tries=0;

            cout << "Enter the number to select" << endl
    << "1 Play Again" << endl
    << "2 Exit" << endl;
 
        cin >> imput;

    if(imput == 1){
//cout << "replay \n";
// return 0; 
cout << endl;
    } else if(imput == 2){
                return 0;
          }
     }
}
