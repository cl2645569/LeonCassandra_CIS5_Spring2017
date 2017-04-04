/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Created on 03/28/17 10:42AM
 * Purpose:  version 3
 */

//System Libraries Here
#include <iostream>
#include <ctime>    //Time to set the seed
#include <cstdlib>  //srand and rand function
#include <fstream>  //File I/O
#include <iomanip>

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
    ofstream out;
    int nGames,wins=0,losses=0;
    int mxThrw=0,nThrw=0;

    
    //Initialize variables
    in.open("GameInfo.dat");
    out.open("GameInfo.dat");
    while(in>>nGames);//Last
     nGames=10000;       
    
    
    //Play the Game
    for(int game=1;game<=nGames;game++){ 
        //Throw dice and sum
        int gmThrw=1;
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
                gmThrw++;
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
     nThrw+=gmThrw;
     if(mxThrw<gmThrw)mxThrw=gmThrw;
    }
    //Output Located Here
cout<<fixed<<setprecision(2)<<showpoint<<endl;
cout<<"Total number of Games        = "<<nGames<<endl;
cout<<"Number of games won          = "<<wins<<endl;
cout<<"Number of games lost         = "<<losses<<endl;
cout<<"Total wins and losses        = "<<wins+losses<<endl; 
cout<<"Percentage wins              = "
        <<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl;
cout<<"Percentage losses            = "
        <<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
cout<<"Max # of throws in a game    = "<<mxThrw<<endl;
cout<<"Average # of throws per game = "<<static_cast<float>(nThrw)/nGames<<endl;


out<<fixed<<setprecision(2)<<showpoint<<endl;
out<<"Total number of Games        = "<<nGames<<endl;
out<<"Number of games won          = "<<wins<<endl;
out<<"Number of games lost         = "<<losses<<endl;
out<<"Total wins and losses        = "<<wins+losses<<endl; 
out<<"Percentage wins              = "
        <<static_cast<float>(wins)/nGames*PERCENT<<"%"<<endl;
out<<"Percentage losses            = "
        <<static_cast<float>(losses)/nGames*PERCENT<<"%"<<endl;
out<<"Max # of throws in a game    = "<<mxThrw<<endl;
out<<"Average # of throws per game = "<<static_cast<float>(nThrw)/nGames<<endl;


    //Exit
    in.close();
    out.close();
    return 0;
}

