/* 
 * File:   main.cpp
 * Author: Cassandra Leon
 * Purpose: This is the Game of Mastermind. Changed to colors instead of numbers. 
 * Created on February 14, 2017, 11:25 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//void menu function
void displayMenu(void);
        
        
int main(int argc, char** argv) {
        //Set the random number seed
        srand(static_cast<unsigned int>(time(0)));
        
        //Declare variables, code and random int
	char colors[4]; 
        int randomint = rand()%5+1; //
        
        //Output directions on how to play.
        cout<<"          This is the game of Mastermind. "<<endl;
        cout<<"  Your objective is to guess the randomly generated code.  "<<endl;
        cout<<"  A set of colors will be made into a four part code.      "<<endl;
        cout<<"A '*' will output for a correct color in the correct place."<<endl;
        cout<<" A 'x' will output for a correct color in the wrong place. "<<endl;
        cout<<"       There are fives colors: R, B, Y, P, G.              "<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        
         //Call the display menu funtion
        displayMenu();
        
        
        //For loop to obtain four random numbers
	for(int i=0;i<4;i++){
	randomint = rand()%5+1;

        //Switch loop changing numbers to colors
	 switch(randomint){
	 case 1:
		 colors[i] = 'R';//1 becomes Red
		 break;
	 case 2:
		 colors[i] = 'B';//2 becomes Blue
		 break;
	 case 3:
		 colors[i] = 'Y';//3 becomes Yellow
		 break;
	 case 4:
		 colors[i] = 'P';//4 becomes Pink
		 break;
	 case 5:
		 colors[i] = 'G';//5 becomes Green
		 break;
	 
	 }
	}
        // Declare variables for actual game
	char usrcolor[4]; //The color the user inputs
      
        //While loop to count how many turns the player takes.
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
		   usrcolor[3] == colors[3])
		{
			cout << "You win! Number of tries: " << trncnt << endl;
			trncnt = 12;
		}

	}
	
	cin.get();
	cin.get();
	return 0;
}
void displayMenu(void){
//output menu
    cout<<"    Choose a level of difficulty.    "<<endl;
    cout<<"           1 for Easy                "<<endl;
    cout<<"          2 for Medium               "<<endl;
    cout<<"           3 for Hard                "<<endl;
//menu options
    char choice; //what the user inputs for difficulty
    cin>>choice;
    switch(choice){
        case 1:{
            
        }
    }
    if(choice=1){
        cout<<"You have chosen the easy difficulty, you will have 20 tries to solve the code."<<endl;
    }
    else if(choice=2){
        cout<<"You have chosen the medium difficulty, you will have 15 tries to solve the code."<<endl;
    }
    else if(choice=3){
        cout<<"You have chosen the hard difficulty, you will have 10 tries to solve the code."<<endl;
    }
        
}