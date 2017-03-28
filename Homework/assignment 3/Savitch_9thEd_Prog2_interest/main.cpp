
/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: Rock Paper Scissors
 * Created on 03/19/17 1:25 PM
 */

#include <iostream> // input-output library
using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
  
    //declare variable
    float intrst, //interest due
            totdue, //total amount due
            minpay, //minimum payment
            acntbal; //account balance
    //initialize variables
    
    
    
    //input data
    cout<<"This program computes the interest due, the total amount due and "
            "the minimum payment for a revolving credit account."<<endl;
    cout<<"Input your account balance: $"<<endl;
    cin>>acntbal;
    
    //map inputs to outputs or process the data
    if (acntbal<=1000)totdue=acntbal+acntbal*.015;
    if (acntbal>1000)totdue=acntbal+acntbal*.01;
    if (acntbal<=1000)intrst=.015;
    if (acntbal>1000)intrst=.01;
    if (totdue<=10)minpay=totdue;
    if (totdue>10)minpay=totdue*.1;
    if (minpay<10)minpay=10;
    //output the transformed data
    cout<<"The total amount due is $"<<totdue<<endl;
    cout<<"The total interest paid is $"<<acntbal*intrst<<endl;
    cout<<"The minimum payment is $"<<minpay<<endl;
    
    //exit stage right;

    return 0;
}
