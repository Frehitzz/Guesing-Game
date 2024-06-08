#include <iostream>
#include <cstdlib> // for srand, rand
#include <ctime> // for time
#include <limits> // for numeric limits
using namespace std;

int main(){
srand(time(NULL));

  int number = rand() % 100 + 1;
int guess;
  int numguess = 0;
  
  cout<<"Welcome to number guessing game"<<endl;
  cout<<"Please choose number 1 to 100  "<<endl;
  
  do{
  	cout<<"enter your guess: ";
  if(!(cin >> guess)){  // if not true then cout the please enter a number
    cout<<"Please enter a number"<<endl;
    cin.clear(); // to clear the input you put there bc you are in a loop
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // the size of what you need to clear in cin.clear  	
  continue; // to continue the input when you typed wrong
  }
numguess++;
    
 if (guess < number){
   cout<<"Too low"<<endl;
 }
 else if (guess > number){
  cout<<"Too high"<<endl;
 }

}while (guess != number); // it means if it is not equal to the number just loop again and again
    cout<<"You guessed it CORRECTLY!! the number is "<<number<< " with "<<numguess <<" Tries"<<endl;
 return 0;
  }