/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Created on 3/30/17 10:26 AM
 * Purpose:  Display Ascii character set
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
    int limit=127;

    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    for(int i=0;i<=limit;i++){
        cout<<static_cast<char>(i);
    if(i%16==15)cout<<endl;
}
    //Exit
    return 0;
}

