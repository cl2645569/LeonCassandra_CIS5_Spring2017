/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Calculate the sum and product of two integers
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream> // input-output library
#include <cmath>
using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    int roots,a,b,c,sq;
    //initialize variables
    
    
    
    //input data
    cout<<"This program calculates the roots of a quadratic equation."<<endl;
    cout<<"Input an a value (a=/=0)"<<endl;
    cin>>a;
    cout<<"Input a b value"<<endl;
    cin>>b;
    cout<<"Input a c value"<<endl;
    cin>>c;
    
    
    //map inputs to outputs or process the data
    sq=(pow(b,2)-(4*a*c));
    roots=((-b)+(sqrt(sq)))/(2*a);
    
    //output the transformed data
    cout<<"The root is "<<roots<<endl;
    //exit stage right;

    return 0;
}
