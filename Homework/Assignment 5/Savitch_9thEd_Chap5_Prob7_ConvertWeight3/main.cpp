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
float const CNVPDKL=2.2046;
float const CNVONGR=28.3495;
float const CNVKLPD=1/2.2046;
float const CNVGRON=1/28.3495;
//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float pounds, ounces, kilos, grams;
    int choice;
    //input data
    do{
    cout<<"            This program converts weight."<<endl;
    cout<<"    If you would like to convert from pounds and ounces"<<endl;
    cout<<"          to kilograms and grams, type 1."<<endl;
    cout<<"If you would like to convert from kilograms and grams"<<endl;
    cout<<"              to pounds and ounces, type 2."<<endl;
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
                    break;
            }
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }while(choice==1||choice==2);
   
    //exit stage right;

    return 0;
}

