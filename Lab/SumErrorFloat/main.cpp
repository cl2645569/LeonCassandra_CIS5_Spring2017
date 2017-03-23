/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Brute force sum compare to multiplication
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
    int nloop=10000000;
    float frac=0.1f,sum=0.0f;
    
    //Input or initialize values Here
    for(int i=1; i<=nloop; i++){
        sum+=frac;
    }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"The computed sum of "
            <<frac<<" -> "<<nloop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<"x"<<nloop<<" = "<<frac*nloop<<endl;
    cout<<"Error = "<<(frac*nloop-sum)/(frac*nloop)*100<<"%"<<endl;

    //Exit
    return 0;
}

