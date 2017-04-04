

/*

* File: main.cpp

* Author:

* Created on July 19, 2016, 9:07 AM

* Purpose: Calculate your weight

*/


//System Libraries Here

#include <iostream>

using namespace std;


//User Libraries Here


//Global Constants Only, No Global Variables

const
float MSSERTH=5.972e27f;
//Mass of earth in grams

const
float GCONST=6.673e-8f;
//Gravitational Constant cm^3/gm sec^2

const
float CNVFTCM=1.0f/30.48f;
//Conversion from ft to cm

const
float CNVMFT=5280.0f;
//Conversion from miles to feet

const
float RADERTH=3959;
//Radius of the earth in miles


//Like PI, e, Gravity, or conversions


//Function Prototypes Here


//Program Execution Begins Here

int main(int argc,char** argv) {

//Declare all Variables Here

float myWeight;
//Result in lbs

float myMass =
6;
//Units of slugs



//Input or initialize values Here

myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass

/(RADERTH*RADERTH*CNVMFT*CNVMFT);


//Process/Calculations Here

cout<<"You Weigh "<<myWeight<<" lbs"<<endl;


//Output Located Here



//Exit

return
0;

}