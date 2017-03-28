/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: This program converts Fahrenheit to Celsius
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
    int C,F;
    //initialize variables
    
    
    
    //input data
cout<<"This program converts Fahrenheit to Celsius."<<endl;
cout<<"Input the degrees in Fahrenheit."<<endl;
cin>>F;
    
    //map inputs to outputs or process the data
  C=F*5/9-32;
    //output the transformed data
  cout<<"Celsius = "<<C<<endl;
    //exit stage right;

    return 0;
}
