/*

* File: main.cpp

* Author:

* Created on July 19, 2016, 9:07 AM

* Purpose: To help teach math skills

*/


//System Libraries Here

#include<iostream>

#include<cstdlib>

#include<ctime>
//set random number seed

#include<iomanip>

using
namespace
std;


//User Libraries Here


//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions


//Function Prototypes Here


//Program Execution Begins Here

int
main(int argc,
char** argv) {

//Set the random number seed

srand(static_cast<unsigned
int>(time(0)));


//Declare all Variables Here

int op1, op2, result, answer;

char choice;


//Input data

cout<<"Math Tutor"<<endl;

do{


cout<<"Choose the operation (* / + -) .....or anything else to exit I guess"<<endl;

cin>>choice;

cout<<endl;

cout<<endl;

if(!(choice=='+'||choice=='-'||choice=='/'||choice=='*')){

cout<<"Exit the Math Tutor"<<endl;

exit(0);

}


//Process/Calculations Here

switch(choice){

case
'+':{

op1=rand()%900+100;
//[100-999]

op2=rand()%900+100;
//[100-999]

answer=op1+op2; 
//[3-4 digit result]

break;

}

case
'-':{

op1=rand()%900+100;
//[100-999]

op2=rand()%900+100;
//[100-999]

answer=op1-op2; 
//[0-3 digit result]

break;

}

case
'*':{

op1=rand()%90+10;
//[10-99]

op2=rand()%90+10;
//[10-99]

answer=op1*op2; 
//[2-4 digit result]

break;

}

case
'/':{

answer=rand()%900+100;
//[10-99]

op2=rand()%90+10;
//[10-99]

op1=answer*op2; 
//[2-4 digit result]

break;

}

default:{

cout<<"Really?"<<endl;

return
1;

}

}


//Output Located Here

cout<<setw(8)<<op1<<endl;

cout<<choice<<setw(7)<<op2<<endl;

cout<<"----------"<<endl;

cout<<"";

cin>>result;


//Compare the answer

cout<<endl;

cout<<((result==answer)?"Correct":"Incorrect")<<endl;

cout<<"The correct answer is = "<<answer<<endl;

cout<<"Type in anything to exit"<<endl;

cout<<endl<<"****************************"<<endl<<endl;

}

while(choice=='+'||choice=='-'||choice=='/'||choice=='*');


//Exit

return
0;

}