
/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: will a sphere float
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream> // input-output library
#include <cmath> //math function library
#include <string>
using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float bouyant,volume,weight,radius,water;
    string does;
    //initialize variables
    water=62.4;
    
    
    //input data
    cout<<"This program will tell you whether a sphere will float."<<endl;  
    cout<<"Input the weight (lbs)"<<endl;
    cin>>weight;
    cout<<"Input the radius (ft)"<<endl;
    cin>>radius;
    
    //map inputs to outputs or process the data
    volume=(4/3)*3.14*pow(radius,3);
    bouyant=volume*water;
    if (bouyant>=weight)does=' y';
    else does=' n';
    //output the transformed data
    cout<<"Does the sphere float?"<<does<<endl;
    //exit stage right;

    return 0;
}
