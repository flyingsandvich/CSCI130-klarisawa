/*
Name  Kodama Arisawa
Date  12-12-2021

This program is a hangman game that pulls from a file with 20, 6 letter words to play a hangman game, then will prompt a user to play again or quit the program
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>

using namespace std;

void greet(){
cout << "   ▄█    █▄       ▄████████ ███▄▄▄▄      ▄██████▄    ▄▄▄▄███▄▄▄▄      ▄████████ ███▄▄▄▄   " << endl;
cout << "  ███    ███     ███    ███ ███▀▀▀██▄   ███    ███ ▄██▀▀▀███▀▀▀██▄   ███    ███ ███▀▀▀██▄ " << endl;
cout << "  ███    ███     ███    ███ ███   ███   ███    █▀  ███   ███   ███   ███    ███ ███   ███ " << endl;
cout << " ▄███▄▄▄▄███▄▄   ███    ███ ███   ███  ▄███        ███   ███   ███   ███    ███ ███   ███ " << endl;
cout << "▀▀███▀▀▀▀███▀  ▀███████████ ███   ███ ▀▀███ ████▄  ███   ███   ███ ▀███████████ ███   ███ " << endl;
cout << "  ███    ███     ███    ███ ███   ███   ███    ███ ███   ███   ███   ███    ███ ███   ███ " << endl;
cout << "  ███    ███     ███    ███ ███   ███   ███    ███ ███   ███   ███   ███    ███ ███   ███ " << endl;
cout << "  ███    █▀      ███    █▀   ▀█   █▀    ████████▀   ▀█   ███   █▀    ███    █▀   ▀█   █▀  " << endl;
cout << endl << endl;
}

void misses(int miss){
    //int miss;
    
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
    

  if(miss==0){
    
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
  }
  else if(miss==1)
  {
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
  }
  else if(miss==2)
  {
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << body << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
  }
  else if(miss==3)
  {
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << arm1 << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
  }
  else if(miss==4)
  {
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << arm2 << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
  }
  else if(miss==5)
  {
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << arm2 << endl;
    cout << leg1 << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
  }
  else if(miss==6)
  {
    cout << galtop << endl;
    cout << galnoose << endl;
    cout << head << endl;
    cout << arm2 << endl;
    cout << leg2 << endl;
    cout << galbod << endl;
    cout << galbod << endl;
    cout << galbase << endl;
  }

}


void display_status(vector<char> incorrect, string answer)
{
  cout<<"Incorrect Guesses: \n";

  for(int i = 0; i<incorrect.size(); i++)
  {
    cout<<incorrect[i]<<" ";
  }

  cout<<"\nWord:\n";

  for(int i = 0; i<answer.length(); i++)
  {
    cout<<answer[i];
  }
}

int main()
{
  greet();

  int Menuimput;

 

  while(Menuimput != 2 ){

Menuimput = 0;
ifstream word;
word.open("words.txt");
string names[20];
string randomWords[20];
int a = 0;
int randNum;
while (word.good()){
getline(word, names[a]); 
a++;
}
for (int i = 0; i < 20; i++) {
srand( time(NULL) ); 
randNum = rand() % 20 + 1; 
randomWords[i] = names[randNum]; 
}
//word.close();      
int i = 0; i < 20; i++;     
// cout << randomWords[i] <<endl;
//  cout << randomWords[i].length()<< endl;


  string codeword = randomWords[i];
//   cout<<codeword<<endl;
//   cout<<codeword.length()<<endl;
  codeword = codeword.substr(0,6);
//     cout<<codeword<<endl;
//   cout<<codeword.length()<<endl;

  string answer = "______";
  int miss = 0;
  vector<char> incorrect;
  bool guess = false;
  char letter;


  while(answer!=codeword && miss < 7)
  {
    misses(miss);
    display_status(incorrect, answer);

    cout<<"\n Enter your guess: ";
    cin>>letter;

    for(int i = 0; i<codeword.length(); i++)
    {
      if(letter==codeword[i])
      {
        answer[i] = letter;
        guess = true;
        
      }
    }

    //  if(answer == codeword )
    //  {
    //      cout<<codeword<<endl;
    //    cout<< answer << answer.length()<<endl;
    //    cout<< randomWords[i] << randomWords[i].length()<<endl;
    //      cout<< "EQUAL!"<<endl;
    //      }
    //  else {
    //      cout<<codeword<<endl;
    //             cout<< answer << answer.length()<<endl;
    //    cout<< randomWords[i] <<randomWords[i].length()<< endl;
    //      cout<< "NOT!"<<endl;
    //      }
    if(guess)
    {
      cout<<"\nCorrect!\n";
    }
    else
    {
      cout<<"\nIncorrect\n";
      incorrect.push_back(letter);
      miss++;
    }
    guess = false;
    //cout<<"test2:"<< answer << "|"<< randomWords[i] << "|/n";
  

if(answer==codeword)
  {
    cout << "You Win";
    cout<<"Congratulations!"<<endl;
  }
  else
  {
    cout<<"You failed, try again"<<endl;
  }
  }

  word.close();
              cout << "\n\nEnter the number to select\n\n" << endl
    << "1 Play Again" << endl
    << "2 Exit" << endl;
 
        cin >> Menuimput;
        if(Menuimput ==1){
  } else if    (Menuimput == 2){
  return 0;
}
}
}
