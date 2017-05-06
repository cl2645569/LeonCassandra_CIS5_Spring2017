/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Converts weight or length
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
float const CNVMRFT=1/0.3048;
float const CNVCNIN=1/2.54;
float const CNVFTMR=0.3048;
float const CNVINCN=2.54;


//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float pounds, ounces, kilos, grams;
    int choice1, choice2;
    float feet, inches, meters, centi;
    
    
    
    //input data
    do{
        cout<<"        This program converts either weight or length."<<endl;
        cout<<"         If you would like to convert weight, type 1."<<endl;
        cout<<"         If you would like to convert length, type 2."<<endl;
        cout<<"                 Otherwise type any key to exit. "<<endl;
        cin>>choice1;
        
        if(choice1==1){
                cout<<"    If you would like to convert from pounds and ounces"<<endl;
                cout<<"          to kilograms and grams, type 1."<<endl;
                cout<<"If you would like to convert from kilograms and grams"<<endl;
                cout<<"              to pounds and ounces, type 2."<<endl;
                cout<<"                 Type any key to exit."<<endl;
                cin>>choice2;        
                //switch case for conversion
                if(choice2==1){
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
                }
                if(choice2==2){
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
                    }
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
        if(choice1==2){
            //input data
            cout<<"            This program converts length."<<endl;
            cout<<"    If you would like to convert from feet and inches"<<endl;
            cout<<"          to meters and centimeters, type 1."<<endl;
            cout<<"If you would like to convert from meters and centimeters"<<endl;
            cout<<"              to feet and inches, type 2."<<endl;
            cout<<"                 Type any key to exit."<<endl;
            cin>>choice2;        
                    //switch case for conversion
            if(choice2==1){
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
            if(choice2==2){
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
    }
        }
    }while(choice1==1||choice1==2);

   
    //exit stage right;

    return 0;
}

