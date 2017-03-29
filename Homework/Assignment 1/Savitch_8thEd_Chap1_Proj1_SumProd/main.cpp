
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
    int sum,prod,numone,numtwo;
    //initialize variables
    
    
    
    //input data
    cout<<"Pick a number:"<<endl;
    cin>>numone;
    cout<<"Pick another number:"<<endl;
    cin>>numtwo;
    
    
    //map inputs to outputs or process the data
    prod=numone*numtwo;
    sum=numone+numtwo;
    //output the transformed data
    cout<<"The product of "<<numone<<" and "<<numtwo<<" is "<<prod<<"."<<endl;
    cout<<"The sum of "<<numone<<" and "<<numtwo<<" is "<<sum<<"."<<endl;
     
    //exit stage right;

    return 0;
}
