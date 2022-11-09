/*
    StdIO HW1
    HANGMAN
    
    By: <Kodama Arisawa> 
    Date: 9/13/2021 
    
    This program in its starte will prompt the user for name and state the progress of compleation for the game
*/

#include <iostream> 
#include <string> 
 
using namespace std; 



int main()
{

    string first;
    string last;
    string full;

    cout << "Hello, enter your first and last name" << endl;
    cin >> first >> last;
    full = first + " " + last;
    cout << "Hello, " << full << "!" << endl;

    cout << "The hangman game is under construction, mabye you will get to play it in a few weeks...\n"
    << "This is what various stages of the hangman game will look like…\n\n";
    string galtop =" |-----------";
    string galnoose =" |/     |";
    string galbod =" |";
    string galbase ="===============";
    string head  =" |      O";
    string body =" |      |";
    string arm1 =" |     /|";
    string arm2 =" |     /|\\";
    string leg1 =" |     /";
    string leg2 =" |     / \\";
    
    cout << "Stage 0 \n\n";
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
    cout << "Press Enter for the next stage \n";
        cin.get();
    cin.get();

    cout << "Stage 1 \n\n";
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
    cout << "Press Enter for the next stage \n";
    
    cin.get();

    cout << "Stage 2 \n\n";
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << body << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
    cout << "Press Enter for the next stage \n";

    cin.get();

     cout << "Stage 3 \n\n";
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << arm1 << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
    cout << "Press Enter for the next stage \n";

    cin.get();
    

    cout << "Stage 4 \n\n";
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << arm2 << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
    cout << "Press Enter for the next stage \n";

    cin.get();

    cout << "Stage 5 \n\n";
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << arm2 << endl;
    cout << leg1 << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
    cout << "Press Enter for the next stage \n";

    cin.get();

    cout << "Stage 6 \n\n";
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << arm2 << endl;
    cout << leg2 << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
    cout << "\nThis is the last stage, Press Enter to exit the program. " << '\n';

    cin.get();
    cin.get();
    return 0; //exit program by returning 0 status to the system
}

    