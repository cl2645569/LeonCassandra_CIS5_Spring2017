/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Convert meters and centimeters to feet and inches
 * Created on 05/03/17, 12:59 PM
 */

#include <iostream> // input-output library
using namespace std;
 // user libraries

//global constants
float const CNVMRFT=1/0.3048;
float const CNVCNIN=1/2.54;
//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float feet, inches, meters, centi;
    char choice;
    //do while loop to keep program going
    do{
        //input data
        cout<<"This program converts meters and centimeters to feet and inches."<<endl;
        cout<<"Please input the feet then inches desired"<<endl;
        cin>>meters>>centi;
        //map inputs to outputs or process the data
        feet=meters*CNVMRFT;
        inches=centi*CNVCNIN;
        //output the transformed data
        cout<<meters<<" meters = "<<feet<<" feet."<<endl;
        cout<<centi<<" centimeters = "<<inches<<" inches."<<endl;
        cout<<"Press X to exit the program or any key to continue."<<endl;
        cin>>choice;
    }while(!(choice=='X'||choice=='x'));
        //exit stage right;

    return 0;
}

