/*
Name  Kodama Arisawa
Date  11-8-2022

this program is the kattis apxiaans problem where we take the imput of a name a nd replace any repeating letters in a sequence with just one letter
*/


#include <iostream>
#include <string>
#include <assert.h>


using namespace std;

	string output;
	string input;
	char previous;



int main() {


	int i = 0;

    cin >> input;   
	
	output += input[0];
	previous = input[0];


	while (i < input.length()){
		i++;
		if (input[i] != previous)
		{
			output += input[i];
		}
		previous = input[i];
	}
    
	cout << output << endl;
	return 0;
}