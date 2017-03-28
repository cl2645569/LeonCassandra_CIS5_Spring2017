/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Created on March 8th, 2017, 5:00 PM
 * Purpose:  Calculate number Of Candy Bars
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    char sex,activity;                 //M or F
    unsigned short ht,wt,age; //height(in), weight(lbs), age(yrs)
    unsigned char cdyCals=230;//Candy bar calories
    float bmr,S,W,A,H;  //Basic Metabolic Rate (calories)
    int nCdyBrs;//Number of candy bars we can eat
 
    //Input data
    cout<<"This program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Are you male or female? (M/F)"<<endl;
    cin>>sex;
    cout<<"How much do you weigh?"<<endl;
    cin>>wt;
    cout<<"How tall are you?"<<endl;
    cin>>ht;
    cout<<"How old are you?"<<endl;
    cin>>age;
    cout<<"Would you describe yourself as Sedentary(S),Somewhat Active(W),"
            "Active (A),or Highly Active (H)?"<<endl;
    cin>>activity;
    cout<<"Inputs are integer based"<<endl;
    
  
    //Map inputs to outputs or process the data
    bmr=(sex=='M')?
         66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt +  4.7f*ht - 4.7f*age;
    if(activity=S)bmr=bmr*.2+bmr;
    if(activity=W)bmr=bmr*.3+bmr;
    if(activity=A)bmr=bmr*.4+bmr;
    if(activity=H)bmr=bmr*.5+bmr;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    
    //Output the transformed data
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;
    
    //Exit stage right!
    return 0;
}
