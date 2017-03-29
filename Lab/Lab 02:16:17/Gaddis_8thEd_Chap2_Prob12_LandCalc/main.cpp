
/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: template to be utilized in creating solutions to problems in CIS 5 class
 * Created on February 14, 2017, 1:52 PM
 */

#include <iostream> // input-output library

using namespace std;
 // user libraries

//global constants
const float CNVACFT=43560; //1 acre = 43560 sq ft
const float CNVMIFT=1.0f/5280; //1 mile = 2580 ft
//function prototypes

//execution begins here

int main(int argc, char** argv) {
    //declare variable
    float acres,ftsq,milesq;
    //initialize variables
    acres=640.0f; //number of acres
    //input data
    
    //map inputs to outputs or process the data
    ftsq=acres*CNVACFT;
    milesq=ftsq*CNVMIFT*CNVMIFT;
    //output the transformed data
    cout<<acres<<"Acres = "<<ftsq<<"ft^2 = "<<milesq<<"mile^2 "<<endl;
    //exit stage right;

    return 0;
}

