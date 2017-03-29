
/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Calculate the sum and product of two integers
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
     string profNm,//professors last name
         yourNm, //users name
         food,adj,color,animal;
     int num;

    //initialize variables
    
    
    
    //input data
       cout<<"This program creates a madlib."<<endl;
       cout<<"Please input your professors last name:"<<endl;
       cin>>profNm;
       cout<<"your name:"<<endl;
       cin>>yourNm;
       cout<<"a food item:"<<endl;
       cin>>food;
       cout<<"a number between 100 and 120:"<<endl;
       cin>>num;
       cout<<"an adjective:"<<endl;
       cin>>adj;
       cout<<"a color:"<<endl;
       cin>>color;
       cout<<"an animal:"<<endl;
       cin>>animal;
               
       
    
    //map inputs to outputs or process the data
  
    //output the transformed data
       cout<<"     Dear Insrtuctor "<<profNm<<","<<endl;
       cout<<"I am sorry that I am unable to turn in my homework at this time. First,"
               "I ate a rotten "<<food<<",which made me turn"<<color<<"and extremely ill. I came"
               "down with a fever of"<<num<<". Next, my "<<adj<<" pet "<<animal<<" must have smelled "
               "the remains of the "<<food<< " on my homework, because he ate it. I am currently "
               "rewriting my homework and hope you will accept it late."<<endl;
    //exit stage right;

    return 0;
}
