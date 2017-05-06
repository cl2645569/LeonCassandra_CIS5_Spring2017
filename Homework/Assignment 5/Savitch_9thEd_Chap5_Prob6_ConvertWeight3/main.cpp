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
float const CNVFTMR=0.3048;
float const CNVINCN=2.54;
//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float feet, inches, meters, centi;
    int choice;
    //input data
    do{
    cout<<"            This program converts length."<<endl;
    cout<<"    If you would like to convert from feet and inches"<<endl;
    cout<<"          to meters and centimeters, type 1."<<endl;
    cout<<"If you would like to convert from meters and centimeters"<<endl;
    cout<<"              to feet and inches, type 2."<<endl;
    cout<<"                 Type any key to exit."<<endl;
    cin>>choice;        
            //switch case for conversion
            switch(choice){
                case 1:
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
                    break;
                case 2:
                    cout<<"This program converts meters and centimeters to feet and inches."<<endl;
                    cout<<"Please input the feet then inches desired"<<endl;
                    cin>>meters>>centi;
                    //map inputs to outputs or process the data
                    feet=meters*CNVMRFT;
                    inches=centi*CNVCNIN;
                    //output the transformed data
                    cout<<meters<<" meters = "<<feet<<" feet."<<endl;
                    cout<<centi<<" centimeters = "<<inches<<" inches."<<endl;
            }
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }while(choice==1||choice==2);
   
    //exit stage right;

    return 0;
}

