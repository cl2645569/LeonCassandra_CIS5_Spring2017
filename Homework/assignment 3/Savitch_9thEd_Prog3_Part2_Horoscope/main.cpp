
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
        cout<<"Aries: Today will be your lucky day."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=4&&day>=20)||(month=5&&day<=20)){
        cout<<"Taurus: Watch out for old friends."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=5&&day>=21)||(month=6&&day<=21)){
        cout<<"Gemini: Today is the day to take risks."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=6&&day>=22)||(month=7&&day<=22)){
        cout<<"Cancer: Stay on the quided path."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=7&&day>=23)||(month=8&&day<=22)){
        cout<<"Leo: Treat yourself."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=8&&day>=23)||(month=9&&day<=22)){
        cout<<"Virgo: Don't believe everything you hear."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=9&&day>=23)||(month=10&&day<=22)){
        cout<<"Libra: Take some time for yourself."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=10&&day>=23)||(month=11&&day<=21)){
        cout<<"Scorpio: Today will be a challenge."<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=11&&day>=22)||(month=12&&day<=21)){
        cout<<"Sagittarius: Be patient today. "<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=12&&day>=22)||(month=01&&day<=19)){
        cout<<"Capricorn: Go out, see the world. "<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=01&&day>=20)||(month=02&&day<=18)){
        cout<<"Aquarius: Love what is given to you today. "<<endl;
        return 1;//use Morgan law to make clearer
     }
if ((month=02&&day>=21)||(month=03&&day<=19))
    ;
{
    cout<<"Pisces: Love yourself."<<endl;
     }
    
    //output the transformed data
    
    //exit stage right;

    return 0;
}
