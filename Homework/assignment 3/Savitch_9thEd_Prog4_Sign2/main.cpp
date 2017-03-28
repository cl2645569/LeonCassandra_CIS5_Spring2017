
/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: What sign are you?
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream> // input-output library
#include <string>
using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
  
    float month,day;
    
    //initialize variables
  
    
    
    //input data
    cout<<"This program will tell you your horoscope."<<endl;
    cout<<"Please input the month you were born. (#)"<<endl;
    cin>>month;
    cout<<"Please input the day you were born. (DD)"<<endl;
    cin>>day;
    //map inputs to outputs or process the data
if ((month=3&&day>=21)||(month=4&&day<=19)){
        cout<<"You are an Aries, which is a Fire Sign. "
              "You are most compatible with Leo and Sagittarius."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=4&&day>=20)||(month=5&&day<=20)){
        cout<<"You are a Taurus, which is an Earth Sign. "
              "You are most compatible with Virgo and Capricorn."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=5&&day>=21)||(month=6&&day<=21)){
        cout<<"You are a Gemini, which is an Air Sign. "
              "You are most compatible with Libra and Aquarius."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=6&&day>=22)||(month=7&&day<=22)){
        cout<<"You are a Cancer, which is a Water Sign."
                "You are most compatible with Pisces and Scorpio."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=7&&day>=23)||(month=8&&day<=22)){
        cout<<"You are a Leo, which is a Fire Sign. "
              "You are most compatible with Aries and Sagittarius."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=8&&day>=23)||(month=9&&day<=22)){
        cout<<"You are a Virgo, which is an Earth Sign. "
              "You are most compatible with Taurus and Capricorn."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=9&&day>=23)||(month=10&&day<=22)){
        cout<<"You are a Libra, which is an Air Sign. "
              "You are most compatible with Gemini and Aquarius."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=10&&day>=23)||(month=11&&day<=21)){
        cout<<"You are a Scorpio, which is a Water Sign."
                "You are most compatible with Cancer and Pisces."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=11&&day>=22)||(month=12&&day<=21)){
        cout<<"You are a Sagittarius, which is a Fire Sign. "
              "You are most compatible with Leo and Aries."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=12&&day>=22)||(month=01&&day<=19)){
        cout<<"You are a Capricorn, which is an Earth Sign. "
              "You are most compatible with Virgo and Taurus."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=01&&day>=20)||(month=02&&day<=18)){
        cout<<"You are an Aquarius, which is an Air Sign."
                "You are most compatible with Gemini and Libra."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=02&&day>=21)||(month=03&&day<=19))
    ;
{
        cout<<"You are a Pisces, which is a Water Sign."
                "You are most compatible with Cancer and Scorpio."<<endl;
     }
    
    //output the transformed data
    
    //exit stage right;

    return 0;
}
