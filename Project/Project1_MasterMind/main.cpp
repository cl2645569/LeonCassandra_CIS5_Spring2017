/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: This is the Game of Mastermind
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream> // input-output library
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
        
    
    //Output the instructions
    cout<<"This is the game of Mastermind."<<endl;
    cout<<"A set of 5 numbers from 1-5 will be made into a code."<<endl;
    cout<<"Your job is to guess that code."<<endl;
    cout<<"If a '*' is output, you have the correct number in the correct space."<<endl;
    cout<<"If a '^' is output, you have the correct number in the wrong space."<<endl;
    
    //Determine the code with random numbers
    int rand1=rand()%5+1;//[1,5] First digit of code
    int rand2=rand()%5+1;//[1,5] Second digit of code
    int rand3=rand()%5+1;//[1,5] Third digit of code
    int rand4=rand()%5+1;//[1,5] Fourth digit of code
    int rand5=rand()%5+1;//[1,5] Fifth digit of code
    
    //Player inputs guess
    cout<<"Please input your guess on separate lines"<<endl;
    cin>>g1>>g2>>g3;
    cout<<g1<<g2<<g3<<endl;
    //declare variable
    
    //initialize variables
    
    
   
    //input data
    
    
    //map inputs to outputs or process the data
  
    //output the transformed data
 
    //exit stage right;

    return 0;
}
