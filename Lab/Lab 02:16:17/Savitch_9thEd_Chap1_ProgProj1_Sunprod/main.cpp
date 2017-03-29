
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
    short op1, op2, sum, prod;
    //initialize variables
    
    
    
    //input data
    cout<<"Choose a number"<<endl;
    cin<<op1;
    
    //map inputs to outputs or process the data
   sum=op1+op2; 
   prod=op1*op2;
    //output the transformed data
    cout<<op1<<"+"<<op2<<"="<<sum<<endl;
    cout<<op1<<"*"<<op2<<"="<<prod<<endl;
    //exit stage right;

    return 0;
}

