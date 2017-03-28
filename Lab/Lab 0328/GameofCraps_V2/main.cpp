/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Created on 03/28/17 10:42AM
 * Purpose:  Version 2
 */

//System Libraries Here
#include <iostream>
#include <ctime>    //Time to set the seed
#include <cstdlib>  //srand and rand function
#include <fstream>  //File I/O

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=100;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ifstream in;
    int nGames,wins=0,losses=0;

    
    //Initialize variables
    in.open("GameInfo.dat");
    while(in>>nGames);//Last
     nGames=10000;       
    
    
    //Play the Game
    for(int game=1;game<=nGames;game++){
        char die1=rand()%6+1; //[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum1=die1+die2;
         
        
     switch(sum1){
         case  7:
         case 11:wins++;break;
         case  2:
         case  3:
         case 12:losses++;break;
         default:{
  
             bool thrwAgn=true;
             do{
                char die1=rand()%6+1; //[1,6]
                char die2=rand()%6+1;//[1,6]
                char sum2=die1+die2;
                if(sum2==7){
                    losses++;
                    thrwAgn=false;
                }else if(sum1==sum2){
                    wins++;
                    thrwAgn=false;
                }
             }while (thrwAgn);
           }
        }
    }
    //Output Located Here
cout<<"Total number of Games = "<<nGames<<endl;
cout<<"Number of games won   = "<<wins<<endl;
cout<<"Number of games lost  = "<<losses<<endl;
cout<<"Total wins and losses = "<<wins+losses<<endl; 
cout<<"Percentage wins       = "
        <<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl;
cout<<"Percentage losses     = "
        <<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;

    //Exit
    in.close();
    return 0;
}

