
/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Calculate Income
 * Created on February 14, 2017, 1:52 PM
 */

#include <iostream> // input-output library

using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
    //declare variable
    float paycheck, hoursworked, payrate;
 
    
    //initialize variables
    hoursworked=40;
    payrate=10;
            
    
    //input data
    
    //map inputs to outputs or process the data
            paycheck=hoursworked*payrate;
    
    //output the transformed data
            cout<<"Pay Rate=$"<<payrate<<"/hr"<<endl;
    cout<<"Hours Worked="<<hoursworked<<"(hrs)"<<endl;
    cout<<"Gross Pay=$"<<paycheck<<endl;
    
    //exit stage right;

    return 0;
}

