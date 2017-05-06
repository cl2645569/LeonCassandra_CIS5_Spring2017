/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Convert feet and inches to meters and centimeters
 * Created on 05/03/17, 12:59 PM
 */

#include <iostream> // input-output library
using namespace std;
 // user libraries

//global constants
float const CNVPDKL=2.2046;
float const CNVONGR=28.3495;
//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float pounds, ounces, kilos, grams;
    char choice;
    //do while loop to keep program going
    do{
        //input data
        cout<<"This program converts pounds and ounces to kilograms and grams."<<endl;
        cout<<"Please input the pounds then ounces desired"<<endl;
        cin>>pounds>>ounces;
        //map inputs to outputs or process the data
        kilos=pounds*CNVPDKL;
        grams=ounces*CNVONGR;
        //output the transformed data
        cout<<pounds<<" pounds = "<<kilos<<" kilos."<<endl;
        cout<<ounces<<" ounces = "<<grams<<" grams."<<endl;
        cout<<"Press X to exit the program or any key to continue."<<endl;
        cin>>choice;
    }while(!(choice=='X'||choice=='x'));
        
        //exit stage right;

    return 0;
}

