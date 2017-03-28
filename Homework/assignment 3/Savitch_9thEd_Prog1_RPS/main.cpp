/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Calculate the sum and product of two integers
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream> // input-output library
using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    char P1,P2;
    float R,P,S;
    //initialize variables
  
    
    
    
    //input data
 cout<<"This program allows two players to play rock, paper, scissors."<<endl;
 cout<<"Player 1 chooses: (R P S)"<<endl;
 cin>>P1;
 cout<<"Player 2 chooses: (R P S)"<<endl;
 cin>>P2;

 
    
    //map inputs to outputs or process the data
 if ((P1=R)&&(P2=R)){
        cout<<"It's a draw."<<endl;
        return 1;//use Morgan law to make clearer
     }
 else if ((P1=S)&&(P2=S)){
        cout<<"It's a draw."<<endl;
        return 1;//use Morgan law to make clearer
     }
 else if ((P1=P)&&(P2=P)){
        cout<<"It's a draw."<<endl;
        return 1;//use Morgan law to make clearer
     }
 else if ((P1=R)&&(P2=S)){
        cout<<"Rock beats scissors, Player 1 wins."<<endl;
        return 1;//use Morgan law to make clearer
     }
 else if ((P1=S)&&(P2=R)){
        cout<<"Rock beats scissors, Player 2 wins."<<endl;
        return 1;//use Morgan law to make clearer
     }
 else if ((P1=P)&&(P2=S)){
        cout<<"Scissors beats paper, Player 2 wins."<<endl;
        return 1;//use Morgan law to make clearer
     }
 else if ((P1=S)&&(P2=P)){
        cout<<"Scissors beats paper, Player 1 wins."<<endl;
        return 1;//use Morgan law to make clearer
     }
 else if ((P1=P)&&(P2=R)){
        cout<<"Paper beats rock, Player 1 wins."<<endl;
        return 1;//use Morgan law to make clearer
     }
 else ((P1=R)&&(P2=P));{
        cout<<"Paper beats rock, Player 2 wins."<<endl;
 }
    //output the transformed data
 
    //exit stage right;

    return 0;
}
