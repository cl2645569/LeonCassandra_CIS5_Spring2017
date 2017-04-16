/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: This is the Game of Mastermind
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream> // input-output library
#include <ctime>    //Time to set the seed
#include <cstdlib>  //srand and rand function
using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int g1, //User guess for first digit
        g2,g3,g4,g5;
    int rn; //Right number
    int rp; //Right position

        
    
    //Output the instructions
    cout<<"This is the game of Mastermind."<<endl;
    cout<<"A set of 5 numbers from 1-6 will be made into a code."<<endl;
    cout<<"Your job is to guess that code."<<endl;
    cout<<"If a '*' is output, you have the correct number in the correct space."<<endl;
    cout<<"If a 'x' is output, you have the correct number in the wrong space."<<endl;
    
    //Determine the code with random numbers
    int r1=rand()%5+1;//[1,5] First digit of code
    int r2=rand()%5+1;//[1,5] Second digit of code
    int r3=rand()%5+1;//[1,5] Third digit of code
    int r4=rand()%5+1;//[1,5] Fourth digit of code
    int r5=rand()%5+1;//[1,5] Fifth digit of code
    
    //Player inputs guess 
    cout<<"Please input your guess."<<endl;
    cout<<"You have 15 tries to guess the code."<<endl;
    //Initialize turncounter
    int turncnt = 0;
    while(turncnt != 15){
        turncnt++;
    
    //do-while loop until player correctly guesses code
     
          do{        
            cin>>g1>>g2>>g3>>g4>>g5;
            
            if (g1==r1){
                cout<<"*";
            }
            if (g2==r2){
                cout<<"*";
            }
            if (g3==r3){
                cout<<"*";
            }
            if (g4==r4){
                cout<<"*";
            }
            if (g5==r5){
                cout<<"*";
            }
            if((g1==r2) || (g1==r3) || (g1==r4) || (g1==r5)){
            cout<<"x";
            }
            if((g2==r1) || (g2==r3) || (g2==r4) || (g2==r5)){
            cout<<"x"; 
            }
            if((g3==r4) || (g3==r1) || (g3==r2) || (g3==r5)){
            cout<<"x";
            }
            if((g4==r1) || (g4==r2) || (g4==r3) || (g4==r5)){
            cout<<"x";
            }
            if((g5==r1) || (g5==r2) || (g5==r3) || (g5==r4)){
             cout<<"x"<<endl;
            }
            cout<<endl;
            //Start right number wrong place
            
            
            
          
            
        }while(!(g1==r1 && g2==r2 && g3==r3 
                && g4==r4 && g5==r5));
        
        if (turncnt == 15){
            cout<<"You lost."<<endl;
        }
    }
    //declare variable
    cout<<"You won!"<<endl;
    cout<<"It took you "<<turncnt<<" many tries to guess the code."<<endl;
    cout<<r1<<r2<<r3<<r4<<r5<<endl;
    
    //initialize variables
    
    
   
    //input data
    
    
    //map inputs to outputs or process the data
  
    //output the transformed data
 
    //exit stage right;

    return 0;
}
