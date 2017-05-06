/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Time Conversion
 * Created on 05/05/17
 */

#include <iostream> // input-output library
using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    int hour, minute;
    char choice;
    
    //initialize variables
    
    
    do{
            //input data
           cout<<"This program converts 24 hours notation to 12 hour notation."<<endl;
           cout<<"Please input the time as such: hour (enter) minute (enter)"<<endl;
           cin>>hour>>minute;
            //map inputs to outputs or process the data
           if(hour>24||minute>60) {
               cout<<"Invalid Input, ending program."<<endl;
               return 0;
           }
           else if(hour>0){
               if(hour<=12)
                   cout<<hour<<":";

               else if(hour>12)
                   cout<<hour-12<<":";
           }
           if(minute<10&&hour>12){
               cout<<"0"<<minute<<" PM"<<endl;
           }
           else if (minute<60&&hour>12){
               cout<<minute<<" PM"<<endl;
           }
           else if(minute<10){
               cout<<"0"<<minute<<" AM"<<endl;
           }
           else if (minute<60){
               cout<<minute<<" AM"<<endl;
           }
           cout<<"Input X to end program"<<endl;
           cin>>choice;
           cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }while(!(choice=='X'||choice=='x'));
   
  
    //output the transformed data
 
    //exit stage right;

    return 0;
}
