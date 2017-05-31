/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: This is the Game of Mastermind. Changed to colors instead of numbers. 
 * Created on 05/24/17
 */

#include <iostream>
#include <cstdlib> // srand and rand function
#include <ctime> // time to set the seed
#include <cmath> // math function
#include <iomanip> //setw function
#include <fstream>  //File I/O
using namespace std;

//declare void menu function
void menu(void);
int score(int [],int);
int game1();
        
int main(int argc, char** argv) {
 //Set the random number seed
     srand(static_cast<unsigned int>(time(0)));  
     
//Declare Variables
  int randomint = 100 + rand()%899;
  int answer=randomint;     //Code to Break
  int guess;                //User's guess
  int tries;                //number of tries
  int right;                //right answer
  int dright, dmidd, dleft; //digits in guess
  int aright, amidd, aleft; //digits in answer
  int cNum;                 //correct number
  int cPos;                 //correct position
  int choice;

    //Separate integer into digits 
  aright = answer % 10;
  aleft = answer / 100;
  amidd = (answer / 10) % 10;
//initialize counter 
  tries = 1;
  right = 0;

    
 //Output menu and options
  menu();
  cin>>choice;
  switch(choice){
      case 1: {
             while (!right) {
            cout << "Guess #" << tries << ": Enter a number between 100 and 999: ";
            cout<<answer;
            cin >> guess;
          //check guess is valid
            if (guess >= 100 && guess <= 999) {
          //check if answer is right
              if (guess == answer) {
                cout << "Right!  You took " << tries<< " move";
                if (tries != 1) cout << "s" ;
                cout << "." << endl;
                right = 1;
              } else {
          //separate guess into digits
                dright = guess % 10;
                dleft = guess / 100;
                dmidd = (guess / 10) % 10;
          //Position counter, how many in correct position
                cPos = 0;
                if (dright == aright) cPos++;
                if (dleft == aleft) cPos++;
                if (dmidd == amidd) cPos++;
          //Number counter, how many correct numbers     
                cNum = 0;
                if (dright == aright || dright == amidd || dright == aleft) cNum++;
                if (dmidd == aright || dmidd == amidd || dmidd == aleft) cNum++;
                if (dleft == aright || dleft == amidd || dleft == aleft) cNum++;
          //Output correct position and correct number
                cout << "Correct position: " << cPos << endl;
                cout << "Correct number:   " << cNum << endl;
              }
            } else {
              cout << "Between 1 and 999, please."<<endl;
            }
            tries++;
             }
            break;
              }
      case 2:{
                    while (!right) {
            cout << "Guess #" << tries << ": Enter a number between 100 and 999: ";
            cout<<answer;
            cin >> guess;
             int choice;
                    //check guess is valid
            if (guess >= 100 && guess <= 999) {
          //check if answer is right
              if (guess == answer) {
                cout << "Right!  You took " << tries<< " move";
                if (tries != 1) cout << "s" ;
                cout << "." << endl;
                right = 1;
              } else {
          //separate guess into digits
                dright = guess % 10;
                dleft = guess / 100;
                dmidd = (guess / 10) % 10;
                if(dright>aright){
                    cout<<"Last digit too high."<<endl;
                }
                if(dmidd>amidd){
                    cout<<"Second digit too high."<<endl;
                }
                if(dleft>aleft){
                    cout<<"First digit too high."<<endl;
                }
                if(dright<aright){
                    cout<<"Last digit too low."<<endl;
                }
                if(dmidd<amidd){
                    cout<<"Second digit too low."<<endl;
                }
                if(dleft<aleft){
                    cout<<"First digit too low."<<endl;
                }
              }
            } else {
              cout << "Between 1 and 999, please."<<endl;
            }
            tries++;
                    }
            break;
              }
          }
 

  
   
  return 0;
}
int game1(){
    
}
void menu(void){
    //Output directions on how to play.
cout<<"          This is the game of Mastermind.                  "<<endl;
cout<<"  Your objective is to guess the randomly generated code.  "<<endl;
cout<<"  A set of colors will be made into a four part code.      "<<endl;
cout<<"A 'R' will output for a correct color in the correct place."<<endl;
cout<<" A 'W' will output for a correct color in the wrong place. "<<endl;
cout<<"       There are fives colors: r, b, y, p, g.              "<<endl;
cout<<"               Colors may be repeated.                     "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
//output menu
cout<<"          Choose a level of difficulty.    "<<endl;
cout<<"      1 for and easier version of the game. "<<endl;
cout<<"            2 for the regular version       "<<endl;
cout<<"                  Any key to exit            "<<endl;

}
