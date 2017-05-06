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
float const CNVFTMR=0.3048;
float const CNVINCN=2.54;
//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float feet, inches, meters, centi;
    char choice;
    //do while loop to keep program going
    do{
        //input data
        cout<<"This program converts feet and inches to meters and centimeters."<<endl;
        cout<<"Please input the feet then inches desired"<<endl;
        cin>>feet>>inches;
        //map inputs to outputs or process the data
        meters=feet*CNVFTMR;
        centi=inches*CNVINCN;
        //output the transformed data
        cout<<feet<<" feet = "<<meters<<" meters."<<endl;
        cout<<inches<<" inches = "<<centi<<" centimeters."<<endl;
        cout<<"Press X to exit the program or any key to continue."<<endl;
        cin>>choice;
    }while(!(choice=='X'||choice=='x'));
        
        //exit stage right;

    return 0;
}

