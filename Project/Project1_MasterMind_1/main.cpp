/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: This is the Game of Mastermind
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream> // input-output library
using namespace std;
 // user libraries

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int g1, //User guess for first digit
        g2,g3,g4,g5;
    int rn; //Right number
    int rp; //Right position

        
    
    //Output the instructions
    cout<<"This is the game of Mastermind."<<endl;
    cout<<"A set of 5 numbers from 1-5 will be made into a code."<<endl;
    cout<<"Your job is to guess that code."<<endl;
    cout<<"If a '*' is output, you have the correct number in the correct space."<<endl;
    cout<<"If a 'x' is output, you have the correct number in the wrong space."<<endl;
    
    //Determine the code with random numbers
    int rand1=rand()%5+1;//[1,5] First digit of code
    int rand2=rand()%5+1;//[1,5] Second digit of code
    int rand3=rand()%5+1;//[1,5] Third digit of code
    int rand4=rand()%5+1;//[1,5] Fourth digit of code
    int rand5=rand()%5+1;//[1,5] Fifth digit of code
    
    //Player inputs guess 
    cout<<"Please input your guess."<<endl;
    cout<<"You have 12 tries to guess the code."<<endl;
    //Initialize turncounter
    int turncnt = 0;
    while(turncnt != 12){
        turncnt++;
    
    //do-while loop until player correctly guesses code
    do{           
            cin>>g1>>g2>>g3>>g4>>g5;
            
            if (g1==rand1){
                rn++;
                rp++;
            }
            if (g2==rand2){
                rn++;
                rp++;
            }
            if (g3==rand3){
                rn++;
                rp++;
            }
            if (g4==rand4){
                rn++;
                rp++;
            }
            if (g5==rand5){
                rn++;
                rp++;
            }
            //Start right number wrong place
            if ((g2==rand1) || (g2==rand3) || (g2==rand4) || (g2==rand5))
                    rn++; 
            else if ((g1==rand2) || (g1==rand3) || (g1==rand4) || (g1==rand5))
                    rn++;
            else if ((g3==rand4) || (g3==rand1) || (g3==rand2) || (g3==rand5))
                    rn++;
            else if ((g4==rand1) || (g4==rand2) || (g4==rand3) || (g4==rand5))
                    rn++;
            else if ((g5==rand1) || (g5==rand2) || (g5==rand3) || (g5==rand4))
                    rn++;
            //output results
            if(rn == 5 && rp == 5)
                cout<<"*****"<<endl;
            else if(rn == 5 && rp == 4)
                cout<<"****x"<<endl;
            else if(rn == 5 && rp == 3)
                cout<<"***xx"<<endl;
            else if(rn == 5 && rp == 2)
                cout<<"**xxx"<<endl;
            else if(rn == 5 && rp == 1)
                cout<<"*xxxx"<<endl;
            else if(rn == 5 && rp == 0)
                cout<<"xxxxx"<<endl;
            //4 Right numbers
            else if(rn == 4 && rp == 4)
                cout<<"****"<<endl;
            else if(rn == 4 && rp == 3)
                cout<<"***x"<<endl;
            else if(rn == 4 && rp == 2)
                cout<<"**xx"<<endl;
            else if(rn == 4 && rp == 1)
                cout<<"*xxx"<<endl;
            else if(rn == 4 && rp == 0)
                cout<<"xxxx"<<endl;
            //3 right numbers
            else if(rn == 3 && rp == 3)
                cout<<"***"<<endl;
            else if(rn == 3 && rp == 2)
                cout<<"**x"<<endl;
            else if(rn == 3 && rp == 1)
                cout<<"*xx"<<endl;
            else if(rn == 3 && rp == 0)
                cout<<"xxx"<<endl;
            //2 right numbers
            else if(rn == 2 && rp == 2)
                cout<<"**"<<endl;
            else if(rn == 2 && rp == 1)
                cout<<"*x"<<endl;
            else if(rn == 2 && rp == 0)
                cout<<"xx"<<endl;
            //1 right number
            else if(rn == 1 && rp == 1)
                cout<<"*"<<endl;
            else if(rn == 0 && rp == 0)
                cout<<""<<endl;
          
            
            
            
            
            
        
        }while(!(g1==rand1 && g2==rand2 && g3==rand3 
                && g4==rand4 && g5==rand5));
        if (turncnt == 12){
            cout<<"You lost."<<endl;
        }
    }
    //declare variable
    cout<<"You won!"<<endl;
    cout<<"It took you "<<turncnt<<" many tries to guess the code."<<endl;
    cout<<rand1<<rand2<<rand3<<rand4<<rand5<<endl;
    
    //initialize variables
    
    
   
    //input data
    
    
    //map inputs to outputs or process the data
  
    //output the transformed data
 
    //exit stage right;

    return 0;
}
