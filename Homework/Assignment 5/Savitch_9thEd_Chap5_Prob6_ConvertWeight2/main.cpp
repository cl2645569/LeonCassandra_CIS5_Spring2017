/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Converts weight
 * Created on 05/03/17, 12:59 PM
 */

#include <iostream> // input-output library
using namespace std;
 // user libraries

//global constants
float const CNVKLPD=1/2.2046;
float const CNVGRON=1/28.3495;
//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float pounds, ounces, kilos, grams;
    char choice;
    //do while loop to keep program going
    do{
        //input data
        cout<<"This program converts kilograms and grams to pounds and ounces."<<endl;
        cout<<"Please input the kilograms then grams desired"<<endl;
        cin>>kilos>>grams;
        //map inputs to outputs or process the data
        pounds=kilos*CNVKLPD;
        ounces=grams*CNVGRON;
        //output the transformed data
        cout<<kilos<<" kilograms = "<<pounds<<" pounds."<<endl;
        cout<<grams<<" grams = "<<ounces<<" ounces."<<endl;
        cout<<"Press X to exit the program or any key to continue."<<endl;
        cin>>choice;
    }while(!(choice=='X'||choice=='x'));
        
        //exit stage right;

    return 0;
}

