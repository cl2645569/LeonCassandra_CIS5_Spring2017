
/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: How Many Peas in a Pod
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
    int numpods,peaspp,totpeas;
    //initialize variables
    
    
    
    //input data
    cout<<"Hello.\n";
    cout << "Press return after entering a number.\n";
  cout << "Enter the number of pods:\n";
  cin >> numpods;
  cout << "Enter the number of peas in a pod:\n";
 cin >> peaspp;
 totpeas = numpods / peaspp;
 cout << "If you have ";
 cout << numpods;
 cout << " pea pods\n";
 cout << "and ";
 cout << peaspp;
 cout << " peas in each pod, then\n";
 cout << "you have ";
 cout << totpeas;
 cout << " peas in all the pods.\n";
 cout<<"Goodbye.\n";

    
    //map inputs to outputs or process the data
  
    //output the transformed data
 
    //exit stage right;

    return 0;
}
