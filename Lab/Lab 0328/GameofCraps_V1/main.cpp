/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Created on 03/28/17 10:42AM
 * Purpose:  Craps Game
 */

//System Libraries Here
#include <iostream>
#include <ctime>    //Time to set the seed
#include <cstdlib>  //srand and rand function

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand(static_cast<unsigned int>(time(0)));
    int nGames,wins=0,losses=0;

    
    //Initialize variables
     nGames=10000;       
    
    
    //Play the Game
    for(int game=1;game<=nGames;game++){
        char die1=rand()%6+1; //[1,6]
        char die2=rand()%6+1;//[1,6]
        char sum1=die1+die2;
         
     if(sum1==7||sum1==11)wins++;
     else if(sum1==2||sum1==3||sum1==12)losses++;
     else{
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
    //Output Located Here
cout<<"Total number of Games = "<<nGames<<endl;
cout<<"Number of games won = "<<wins<<endl;
cout<<"Number of games lost = "<<losses<<endl;
cout<<"Total wins and losses = "<<wins+losses<<endl; 

    //Exit
    return 0;
}

