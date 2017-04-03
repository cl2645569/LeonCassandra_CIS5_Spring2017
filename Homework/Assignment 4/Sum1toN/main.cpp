/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Created on 03/23/17, 11:40 AM
 * Purpose:  Sum of 1 to N
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
    // Make sure 0<=n<=4000
    int n=100,sum=0;
    
    //Input or initialize values Here
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"The sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<" and  "<<n<<"*("<<n<<"+1)/2 = "<<n*(n+1)/2<<endl;

    //Exit
    return 0;
}

