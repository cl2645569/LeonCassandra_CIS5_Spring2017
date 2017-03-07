/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Created on 03/07/2017 12:05 PM
 * Purpose:  Calculate # of CandyBars
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char sex; // M or F
    unsigned short ht,wt,age; //height in inches, weight in pounds, age in years
    unsigned char cdyCals=230;//Candy Calories
    float bmr; //Basic Metabolic Rate (calories)
    int nCdyBrs;//Number of Candy Bars we can eat
    //Input or initialize values Here
    cout<<"This program calculates the number of candy bars "<<endl;
    cout<<" allowed per day based upon your BMR."<<endl;
   
    cout<<"Are you male or female? (M/F)"<<endl;
    cin>>sex;
    cout<<"How tall are you? (in)"<<endl;
    cin>>ht;
    cout<<"How much do you weigh? (lbs)"<<endl;
    cin>>wt;
    cout<<"How old are you? (yrs)"<<endl;
    cin>>age;
    
    //Process/Calculations Here
    bmr=(sex=='M')?
         66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt +  4.7f*ht - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    //Output Located Here
    cout<<"You may have "<<nCdyBrs<<" candy bars."<<endl;

    //Exit
    return 0;
}

