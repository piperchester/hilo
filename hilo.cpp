/**
 * A simple guessing game to guess a random integer.
 *
 */

#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

 using namespace std;

 int main ()
 {
 	string playing;
 	cout << "Hello there! Would you like to play a game? ";
 	cin >> playing;

 	string upperCased;
 	upperCased.assign(playing);
 	std::transform(upperCased.begin(), upperCased.end(), upperCased.begin(), ::toupper);

 	if (upperCased.compare("YES") == 0){
 		cout << "Let's play!\n";
 		cout << "I'm thinking of a number between 1 and 100...\n";
 		cout << "Can you guess it? ";

 		int guess;
 		int answer = 42;

 		cin >> guess;

 		if (guess == answer){
 			cout << "That's right!";
 		}else if (guess < answer){
 			cout << "Too lo!";
 		}else{
 			cout << "Too hi!";
 		}
 	}else{
 		cout << "Your loss...";
 	}

 	return 0;
 }