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
#include <string>
using namespace std;

//declare void menu function
void menu(void);
void game1(int,int,int,int,int,int,int,int,int,int,int);
void game2(int,int,int,int,int,int,int,int,int,int,int);
void win();
        
int main(int argc, char** argv) {
 //Set the random number seed
     srand(static_cast<unsigned int>(time(0)));  
     
 //File I/O
     ifstream in;
     ofstream out;
     
    in.open("mastermind.dat");
    out.open("mastermind.dat");
//Declare Variables
  int guess;                //User's guess
  int tries;                //number of tries
  int dright, dmidd, dleft; //digits in guess
  int aright, amidd, aleft; //digits in answer
  int cNum;                 //correct number
  int cPos;                 //correct position
  int choice,choice2;

//initialize counter 
  tries = 1;
 
  //Begin time calculation
  int beg=time(0);
  
  //do while loop to continue game if player wishes
  do{
      
 //display menu and players chooses game
  menu();
  cin>>choice;
  // Check if player wishes to leave program
  if((!(choice==2))&&(!(choice==1))){
      cout<<"Goodbye!"<<endl;
      exit(choice);
  }
  //switch case to play each game
  switch(choice){
      case 1: {
        int randint = 100 + rand()%899;
        int answer=randint;     //Code to Break
        //Separate integer into digits 
        aright = answer % 10;
        aleft = answer / 100;
        amidd = (answer / 10) % 10;
             game1(tries,guess,answer,dleft,dmidd,dright,
             aleft,amidd,aright,cPos,cNum);
          break;
              }
      case 2:{
        int randint = 100 + rand()%899;
        int answer=randint;     //Code to Break
        //Separate integer into digits 
        aright = answer % 10;
        aleft = answer / 100;
        amidd = (answer / 10) % 10;
             game2(tries,guess,answer,dleft,dmidd,dright,
             aleft,amidd,aright,cPos,cNum); 
          break;
              }
          }
  cout<<"To play again type 3."<<endl;
  cin>>choice2;
  }while(choice2==3);
 int end=time(0);//End time of Game play
cout<<"Total time played = "<<end-beg<<" seconds."<<endl;
cout<<"Goodbye!"<<endl;

//Close Files and Exit stage right!
in.close();
out.close();

  return 0;
}
void game2(int tries,int guess,int answer,int dleft,int dmidd,
        int dright,int aleft,int amidd,int aright,int cPos,int cNum){
     while (!(guess == answer)) {
            cout << "Guess #" << tries << ": Enter a number between 100 and 999: ";
            cout<<answer;
            cin >> guess;
             int choice;
                    //check guess is valid
            if (guess >= 100 && guess <= 999) {
          //check if answer is right
              if (guess == answer) {
                  win();
                cout << "Right!  You took " << tries<< " move";
                if (tries != 1) cout << "s" ;
                cout << "." << endl;
              } else {
          //separate guess into digits
                dright = guess % 10;
                dleft = guess / 100;
                dmidd = (guess / 10) % 10;
                if(dleft>aleft){
                    cout<<"First digit too high."<<endl;
                }
                if(dleft<aleft){
                    cout<<"First digit too low."<<endl;
                }
                if(dleft==aleft){
                    cout<<"First digit correct!"<<endl;
                }
                if(dmidd>amidd){
                    cout<<"Second digit too high."<<endl;
                }
                if(dmidd<amidd){
                    cout<<"Second digit too low."<<endl;
                }
                if(dmidd==amidd){
                    cout<<"Second digit correct!"<<endl;
                }
                if(dright>aright){
                    cout<<"Last digit too high."<<endl;
                }
                if(dright<aright){
                    cout<<"Last digit too low."<<endl;
                }
                if(dright==aright){
                    cout<<"Third digit correct!"<<endl;
                }
              }
            } else {
              cout << "Between 1 and 999, please."<<endl;
            }
            tries++;
                    }
}
void game1(int tries,int guess,int answer,int dleft,int dmidd,
        int dright,int aleft,int amidd,int aright,int cPos,int cNum){
      while (!(guess == answer)) {
            cout << "Guess #" << (int)tries << ": Enter a number between 100 and 999: ";
            cout<<answer;
            cin >> guess;
          //check guess is valid
            if (guess >= 100 && guess <= 999) {
          //check if answer is right
              if (guess == answer) {
                  win();
                cout << "Right!  You took " << tries<< " move";
                if (tries != 1) cout << "s" ;
                cout << "." << endl;
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
}
void score(int scr[],int tries){
    //Scoring 
    //Set score equal to equation
    scr[tries]=(1/(pow(tries,2))*5);
    //output score
    cout<<fixed<<setprecision(0)<<showpoint<<endl;
    cout<<"Your score is "<<scr[tries]<<endl;
    
}
void win(){
    cout<<" **  **   ******   **   **       **     **   ***   ****   **    *** "<<endl;
    cout<<" **  **  **    **  **   **       **     **   ***   *****  **    ***"<<endl;
    cout<<"   **    **    **  **   **       **  *  **   ***   ** **  **    ***"<<endl;
    cout<<"   **    **    **  **   **       **** ****   ***   **  ** **       "<<endl;
    cout<<"   **     ******    *****        **     **   ***   **   ****    ***"<<endl;
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
cout<<"            1 for the regular version.       "<<endl;
cout<<"       2 for an easier version of the game   "<<endl;
cout<<"                  Any key to exit            "<<endl;

}

