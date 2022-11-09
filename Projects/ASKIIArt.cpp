/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: <Kodama Arisawa> 
    Date: 11/8/2022

    
    This program produces an ASCII art on the console.
    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names
 
//main entry point of the program
int main()
{
    //FIXME3: declare a variable to store name #fixed#
    //FIXME4: prompt user to enter their name and store the value in variable #fixed#
    
    //FIXME5: greet the name using the variable as the following output #fixed#
    //must output: Nice meeting you, <name>!
    string first;
    string last;
    string full;

    cout << "Enter your first and last name" << endl;
    cin >> first >> last;
    full = first + " " + last;
    cout << "Nice meeting you, " << full << "!" << endl;

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 ="   |\\_/|     *****************************    (\\_/)";
    string line2 =" /  @  @ \\   *         ASCII Lab         *   (='.'=) ";
    string line3 ="( >   0  < ) *    By: <Kodama Arisawa>   * ( \" )_( \" ) ";
    string line4 ="   >>x<<     *          CSCI 111         * ";
    string line5 =" /   O  \\    *****************************";
    
    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
    cout << line4 << endl;
    cout << line5 << endl;

    //FIXME6: use variable to print the second line line of the graphic #fixed#
    //FIXME7: print the third line of the graphics #fixed#
    //FIXME8: use variable to print the fourth line #fixed#
    //FIXME9: use variable to print the fifth line #fixed#
    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "\nGood bye... hit enter to exit the program: " << '\n';

    cin.get();
    cin.get();
    //FIXME10: make the console wait for user input #fixed#

    return 0; //exit program by returning 0 status to the system
}