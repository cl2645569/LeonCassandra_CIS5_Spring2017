
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
const float TON=35273.92;
const float OUNCE=1/35273.92;
//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float ounCer,
            cerBox, // how many tons is a cereal box
            BoxTon; // how many boxes make up a ton
    
    
    cout<<"How many ounces is your box of cereal?"<<endl;
    cin>>ounCer;
    //initialize variables
    
    
    
    //input data
            
    
    //map inputs to outputs or process the data
    BoxTon=TON/ounCer;
    cerBox=ounCer/TON;
            
    //output the transformed data
    cout<<"Your cereal box is "<<cerBox<<" tons."<<endl;
    cout<<"You would need "<<BoxTon<<" to make a ton."<<endl;
    //exit stage right;

    return 0;
}
