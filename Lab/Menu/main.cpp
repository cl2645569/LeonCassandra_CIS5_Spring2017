/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on 03/23/17, 12:07 PM
 * Purpose: Menu program ->hmwk 4
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
    char choice;
    
    
    //Show Menu and loop
    do {
        //Display menu
        cout<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Sum 1 to n Problem"<<endl;
        cout<<"Type 2 for Sum 0.1 Error Problem"<<endl;
        cout<<"Type 3 Problem 3"<<endl;
        cout<<"Type 4 Problem 4"<<endl; 
        cout<<"Type 5 Problem 5"<<endl;
        cout<<"Type 6 Problem 6"<<endl;
        cout<<"Type 7 Problem 7"<<endl;
        cout<<"Type 8 Problem 8"<<endl;
        cout<<"Type 9 Problem 9"<<endl;
        
        cin>>choice;
        
        switch (choice){
            case '1':{
           //Declare all Variables Here
           // Make sure 0<=n<=4000
           int n=100,sum=0;
    
           //Input or initialize values Here
           for(int i=1; i<=n; i++){
           sum+=i;
           }
           cout<<""<<endl;
           cout<<"The sum of 1 to "<<n<<" = "<<sum<<endl;
           cout<<" and  "<<n<<"*("<<n<<"+1)/2 = "<<n*(n+1)/2<<endl;
                break;
            }
            case '2':{
           //Declare all Variables Here
             int nloop=10000000;
             float frac=0.1f,sum=0.0f;
    
             //Input or initialize values Here
             for(int i=1; i<=nloop; i++){
            sum+=frac;
             }   
             //Output Located Here
            cout<<"The computed sum of "
            <<frac<<" -> "<<nloop<<" times = "<<sum<<endl;
            cout<<"Simple multiplication of "
            <<frac<<"x"<<nloop<<" = "<<frac*nloop<<endl;
             cout<<"Error = "<<(frac*nloop-sum)/(frac*nloop)*100<<"%"<<endl; 
             cout<<""<<endl;
                break;
            }
                
            case '3': {
                cout<<"In problem solution 3"<<endl;
                break;
        }
            case '4': {
                cout<<"In problem solution 4"<<endl;
                break;
        }
            case '5': {
                cout<<"In problem solution 5"<<endl;
                break;
        }
            case '6': {
                cout<<"In problem solution 6"<<endl;
                break;
        }
            case '7': {
                cout<<"In problem solution 7"<<endl;
                break;
        }
            case '8': {
                cout<<"In problem solution 8"<<endl;
                break;
        }
            case '9': {
                cout<<"In problem solution 9"<<endl;
                break;
        }
        }
    }while(choice>='1'&&choice<='9');
    
    //Process/Calculations Here
    
    //Output Located Here


    //Exit
    return 0;
    }


