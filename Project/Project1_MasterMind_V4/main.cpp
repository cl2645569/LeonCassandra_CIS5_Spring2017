/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: This is the Game of Mastermind. Changed to colors instead of numbers. 
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream>
#include <cstdlib> // srand and rand function
#include <ctime> // time to set the seed
#include <cmath> // math function
#include <iomanip> //setw function
#include <fstream>  //File I/O
using namespace std;

//declare void menu function
void menu(void);
        
        
int main(int argc, char** argv) {
        //Set the random number seed
        srand(static_cast<unsigned int>(time(0)));  
        
        //File I/O
     ifstream in;
     ofstream out;
     
    //declare variable - what user inputs as choice
    char choice; //what the user inputs for difficulty
    //while loop to rerun program until user decides otherwise
      while(!(choice=0)){  
        //Output directions on how to play.
        cout<<"          This is the game of Mastermind.                  "<<endl;
        cout<<"  Your objective is to guess the randomly generated code.  "<<endl;
        cout<<"  A set of colors will be made into a four part code.      "<<endl;
        cout<<"A 'R' will output for a correct color in the correct place."<<endl;
        cout<<" A 'W' will output for a correct color in the wrong place. "<<endl;
        cout<<"       There are fives colors: r, b, y, p, g.              "<<endl;
        cout<<"             Colors may be repeated.                       "<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        
     //Call the display menu funtion
    menu();
    //Declare variables, code and random int
    
    char colors[4]; 
    int randomint = rand()%5+1; 
    //For loop to obtain four random numbers
    for(int i=0;i<4;i++){
    randomint = rand()%5+1;
    
    //File I/O
    in.open("mastermind.dat");
    out.open("mastermind.dat");
    
    //Switch loop changing numbers to colors
     switch(randomint){
         case 1:
                 colors[i] = 'r';//1 becomes Red
                 break;
         case 2:
                 colors[i] = 'b';//2 becomes Blue
                 break;
         case 3:
                 colors[i] = 'y';//3 becomes Yellow
                 break;
         case 4:
                 colors[i] = 'p';//4 becomes Pink
                 break;
         case 5:
                 colors[i] = 'g';//5 becomes Green
                 break;
            }
    }
        // Declare variables for actual game
	char usrcolor[4]; //The color the user inputs
        
        //menu options
    cin>>choice;
//case 1, easy difficulty
switch (choice){
            case '1':{
    cout<<"You have chosen 'Easy', you will have 15 tries to solve the code."<<endl;
        //While loop to count how many turns the player takes.
        int trncnt = 0;
        while(trncnt != 15){
            trncnt++;
        //Tell the user how to input guess.
            cout << "Current try: " << trncnt << endl;
        //for loop for user to input guess for four colors
            for(int i=0;i<4;i++){
                    cout << "Color " << i << ": "; 
                    cin >> usrcolor[i];
            }
        //for loop to output when color is correct and placement is correct
            for(int i=0;i<4;i++){		
                    if(usrcolor[i] == colors[i])
                            cout << "R" << " ";
            }
        //if statements to determine if correct color
            if(usrcolor[0] == colors[1] || 
               usrcolor[0] == colors[2] ||
               usrcolor[0] == colors[3] ){
                       cout << "W" << " ";
            }
            if(usrcolor[1] == colors[0] ||
               usrcolor[1] == colors[2] ||
               usrcolor[1] == colors[3]){
                               cout << "W" << " ";
               }
            if(usrcolor[2] == colors[0] ||
               usrcolor[2] == colors[1] ||
               usrcolor[2] == colors[3]){
                       cout << "W" << " ";
               }
            if(usrcolor[3] == colors[0] ||
               usrcolor[3] == colors[1] ||
               usrcolor[3] == colors[2])
                    {
                            cout << "W" << " ";
                    }

            cout << endl << endl;
            if(trncnt == 15){
            cout << "You lost." << endl;
    }
            if(usrcolor[0] == colors[0] &&
               usrcolor[1] == colors[1] &&
               usrcolor[2] == colors[2] &&
               usrcolor[3] == colors[3]){
                    cout << "You win! Number of tries: " << trncnt << endl;
                   
    //Scoring 
    //Declare variables for scoring
    float score;
    //Set score equal to equation
    score=(1/(pow(trncnt,2))*50000);
    //output score
    cout<<fixed<<setprecision(0)<<showpoint<<endl;
    cout<<"Your score is "<<score<<endl;
    break;
    
                }
            }
        } 
    }
//Case 2, medium difficulty
switch (choice){
            case '2':{
    cout<<"You have chosen 'Medium', you will have 12 tries to solve the code."<<endl;
        int trncnt = 0;
        while(trncnt != 12){
            trncnt++;
        //Tell the user how to input guess.
            cout << "Current try: " << trncnt << endl;
        //for loop for user to input guess for four colors
            for(int i=0;i<4;i++){
                    cout << "Color " << i << ": "; 
                    cin >> usrcolor[i];
            }
        //for loop to output when color is correct and placement is correct
            for(int i=0;i<4;i++){		
                    if(usrcolor[i] == colors[i])
                            cout << "R" << " ";
            }
        //if statements to determine if correct color
            if(usrcolor[0] == colors[1] || 
               usrcolor[0] == colors[2] ||
               usrcolor[0] == colors[3] ){
                       cout << "W" << " ";
            }
            if(usrcolor[1] == colors[0] ||
               usrcolor[1] == colors[2] ||
               usrcolor[1] == colors[3]){
                               cout << "W" << " ";
               }
            if(usrcolor[2] == colors[0] ||
               usrcolor[2] == colors[1] ||
               usrcolor[2] == colors[3]){
                       cout << "W" << " ";
               }
            if(usrcolor[3] == colors[0] ||
               usrcolor[3] == colors[1] ||
               usrcolor[3] == colors[2])
                    {
                            cout << "W" << " ";
                    }

            cout << endl << endl;
            if(trncnt == 12){
            cout << "You lost." << endl;
    }
            if(usrcolor[0] == colors[0] &&
               usrcolor[1] == colors[1] &&
               usrcolor[2] == colors[2] &&
               usrcolor[3] == colors[3]){
                    cout << "You win! Number of tries: " << trncnt << endl;
    //Scoring 
    //Declare variables for scoring
    float score;
    //Set score equal to equation
    score=(1/(pow(trncnt,2))*50000);
    //output score
    cout<<"Your score is "<<score<<endl;break;           
                }
            }
        }
    }
switch (choice){
            case '3':{
    cout<<"You have chosen 'Hard', you will have 8 tries to solve the code."<<endl;
        int trncnt = 0;
        while(trncnt != 8){
            trncnt++;
        //Tell the user how to input guess.
            cout << "Current try: " << trncnt << endl;
        //for loop for user to input guess for four colors
            for(int i=0;i<4;i++){
                    cout << "Color " << i << ": "; 
                    cin >> usrcolor[i];
            }
        //for loop to output when color is correct and placement is correct
            for(int i=0;i<4;i++){		
                    if(usrcolor[i] == colors[i])
                            cout << "R" << " ";
            }
        //if statements to determine if correct color
            if(usrcolor[0] == colors[1] || 
               usrcolor[0] == colors[2] ||
               usrcolor[0] == colors[3] ){
                       cout << "W" << " ";
            }
            if(usrcolor[1] == colors[0] ||
               usrcolor[1] == colors[2] ||
               usrcolor[1] == colors[3]){
                               cout << "W" << " ";
               }
            if(usrcolor[2] == colors[0] ||
               usrcolor[2] == colors[1] ||
               usrcolor[2] == colors[3]){
                       cout << "W" << " ";
               }
            if(usrcolor[3] == colors[0] ||
               usrcolor[3] == colors[1] ||
               usrcolor[3] == colors[2])
                    {
                            cout << "W" << " ";
                    }

            cout << endl << endl;
            if(trncnt == 8){
            cout << "You lost." << endl;
    }
            if(usrcolor[0] == colors[0] &&
               usrcolor[1] == colors[1] &&
               usrcolor[2] == colors[2] &&
               usrcolor[3] == colors[3]){
                    cout << "You win! Number of tries: " << trncnt << endl;
    //Scoring 
    //Declare variables for scoring
    float score;
    //Set score equal to equation
    score=(1/(pow(trncnt,2))*50000);
    //output score
    cout<<"Your score is "<<score<<endl; 

    break;          
                }
            }
        }
    }break;
        }
    

     //Exit
    in.close();
    out.close();
        
	return 0;
}
void menu(void){
//output menu
    cout<<"          Choose a level of difficulty.    "<<endl;
    cout<<"                  1 for Easy                "<<endl;
    cout<<"                 2 for Medium               "<<endl;
    cout<<"                  3 for Hard                "<<endl;
    cout<<"                      or                     "<<endl;
    cout<<"                  0 to exit                 "<<endl;
}