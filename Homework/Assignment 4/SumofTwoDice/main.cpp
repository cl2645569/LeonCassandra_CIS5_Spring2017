/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Created on 03/28/17 10:42AM
 * Purpose:  Sum of 2 Dice
 */

//System Libraries Here
#include <iostream>
#include <ctime>    //Time to set the seed
#include <cstdlib>  //srand and rand function
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
   
    int nThrws=36000;
    int f2=0,f3=0,f4=0,f5=0,f6=0,
        f7=0,f8=0,f9=0,f10=0,f11=0,f12=0; //how many times did we throw this value
    
    //Loop and throw the dice
    for(int thrw=1;thrw<=nThrws;thrw++){
        char die1=rand()%6+1; //[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum=die1+die2;
        switch (sum){
            case 2:f2++;break;
            case 3:f3++;break;
            case 4:f4++;break;
            case 5:f5++;break;
            case 6:f6++;break;
            case 7:f7++;break;
            case 8:f8++;break;
            case 9:f9++;break;
            case 10:f10++;break;
            case 11:f11++;break;
            case 12:f12++;break;
            default: cout<<"Bad Throw"<<endl;
        }     
               
        }
    
    
    //Output Located Here
    cout<<"Statistics os summing and throwing a pair of dice"<<endl;
    cout<<" 2 was thrown "<<setw(6)<<f2<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 3 was thrown "<<setw(6)<<f3<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 4 was thrown "<<setw(6)<<f4<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 5 was thrown "<<setw(6)<<f5<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 6 was thrown "<<setw(6)<<f6<<" out of "<<nThrws<<" times."<<endl; 
    cout<<" 7 was thrown "<<setw(6)<<f7<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 8 was thrown "<<setw(6)<<f8<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 9 was thrown "<<setw(6)<<f9<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 10 was thrown "<<setw(6)<<f10<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 11 was thrown "<<setw(6)<<f11<<" out of "<<nThrws<<" times."<<endl;
    cout<<" 12 was thrown "<<setw(6)<<f12<<" out of "<<nThrws<<" times."<<endl;
    cout<<endl<<"Total throws = "<<(f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12)<<" = "<<nThrws<<endl;
    //Exit
    return 0;
}
