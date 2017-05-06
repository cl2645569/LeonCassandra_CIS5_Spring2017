/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on 03/23/17, 12:07 PM
 * Purpose: Menu program ->hmwk 4
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
   //Show Menu and loop
    do {
        //Display menu
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for X Problem"<<endl;
        cout<<"Type 2 for Number Problem"<<endl;
        cout<<"Type 3 for Check Problem"<<endl;
        cout<<"Type 4 for ISP Problem"<<endl; 
        cout<<"Type 5 for Paycheck Problem"<<endl;
        cout<<"Type 6 for Sequence Problem"<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cin>>choice;
        
        switch (choice){
            case '1':{
                       int number;
                cout<<"This program will output the number you input into an x formation"<<endl;
                cout<<"Please input the number you choose"<<endl;
                cin>>number;
                //map inputs to outputs or process the data
                for(int i = 1; i <= number; i++){
                for(int j = 1; j <= 12; j++){
                  if(i == j){
                    cout << i;
                  }else{
                    cout << " ";
                  }
                }
                cout<<endl;
              }
                for(int i = number; i >= 1; i--){
                for(int j = 1; j <= 12; j++){
                  if(i == j){
                    cout << i;
                  }else{
                    cout << " ";
                  }
                }
                cout<<endl;
              }
                break;
            }
            case '2':{
                //declare variable
                int number;
                //initialize variables
                cout<<"Input your 4 digit number"<<endl;
                cin>>number;
                while(number){
                    int digit = number%10;
                    number/=10;
                    if (!(digit)){
                        cout<<"?"<<endl;
                    }
                    if(digit==0){
                        cout<<" "<<endl;}
                    else if(digit==1){
                        cout<<"1 *"<<endl;}
                    else if(digit==2){
                        cout<<"2 **"<<endl;}
                    else if(digit==3){
                        cout<<"3 ***"<<endl; }
                    else if(digit==4){
                        cout<<"4 ****"<<endl; }
                    else if(digit==5){
                        cout<<"5 *****"<<endl; }
                    else if(digit==6){
                        cout<<"6 ******"<<endl; }
                    else if(digit==7){
                        cout<<"7 *******"<<endl; }
                    else if(digit==8){
                        cout<<"8 ********"<<endl; }
                    else if(digit==9){
                        cout<<"9 *********"<<endl; }
                    else{
                        cout<<"?"<<endl;
                    }
                }
               break;
            }
                
            case '3': {
                //declare variable
                string fholder,lholder,fpayee,lpayee,date;
                int amount;
                //initialize variables


                //input data
                cout<<"This program outputs a check."<<endl;
                cout<<"Input the account holder's first name then last name:"<<endl;
                cin>>fholder>>lholder;
                cout<<"Input the payee's first name then last name:"<<endl;
                cin>>fpayee>>lpayee;
                cout<<"Input the Date:"<<endl;
                cin>>date;
                cout<<"Input the amount: $"<<endl;
                cin>>amount;
                cout<<"`````````````````````````````````````"<<endl;
                //map inputs to outputs or process the data

                //output the transformed data
              cout<<fholder<<" "<<lholder<<endl;
                cout<<"STREET ADDRESS"<<endl;
                cout<<"CITY, STATE ZIP               Date: "<<date<<endl;
                cout<<endl;
                cout<<"Pay to the Order of:  "<<fpayee<<" "<<lpayee<<"     $ "<<amount<<endl;
                cout<<endl;
                //Output the amount in words
                int thousand=amount/1000;
                    if(amount>=1000){
                    cout<<"One Thousand";}
                amount-=thousand*1000;

                int hundred=amount/100;
                    if(amount>=900){
                    cout<<" Nine Hundred";}
                    else if(amount>=800){
                    cout<<" Eight Hundred";}
                    else if(amount>=700){
                    cout<<" Seven Hundred";}
                    else if(amount>=600){
                    cout<<" Six Hundred";}
                    else if(amount>=500){
                    cout<<" Five Hundred";}
                    else if(amount>=400){
                    cout<<" Four Hundred";}
                    else if(amount>=300){
                    cout<<" Three Hundred";}
                    else if(amount>=200){
                    cout<<" Two Hundred";}
                    else if(amount>=100){
                    cout<<" One Hundred";}
                amount-=hundred*100;

                int ten=amount/10;
                    if(amount>=90){
                    cout<<" Ninety";}
                    else if(amount>=80){
                    cout<<" Eighty";}
                    else if(amount>=70){
                    cout<<" Seventy";}
                    else if(amount>=60){
                    cout<<" Sixty";}
                    else if(amount>=50){
                    cout<<" Fivety";}
                    else if(amount>=40){
                    cout<<" Fourty";}
                    else if(amount>=30){
                    cout<<" Thirty";}
                    else if(amount>=20){
                    cout<<" Twenty";}
                    else if(amount==19){
                    cout<<" Nineteen";}
                    else if(amount==18){
                        cout<<" Eighteen";}
                    else if(amount==17){
                        cout<<" Seventeen";}
                    else if(amount==16){
                        cout<<" Sixteen";}
                    else if(amount==15){
                        cout<<" Fifteen";}
                    else if(amount==14){
                        cout<<" Fourteen";}
                    else if(amount==13){
                        cout<<" Thirteen";}
                    else if(amount==12){
                        cout<<" Twelve";}
                    else if(amount==11){
                        cout<<" Eleven";}
                    else if(amount==10){
                        cout<<" Ten";}
                amount-=ten*10;

                if(amount<=9){
                    if(amount==9){
                        cout<<" Nine";}
                    else if(amount==8){
                        cout<<" Eight";}
                    else if(amount==7){
                        cout<<" Seven";}
                    else if(amount==6){
                        cout<<" Six";}
                    else if(amount==5){
                        cout<<" Five";}
                    else if(amount==4){
                        cout<<" Four";}
                    else if(amount==3){
                        cout<<" Three";}
                    else if(amount==2){
                        cout<<" Two";}
                    else if(amount==1){
                        cout<<" One";}
                     }
                cout<<" and no/100s Dollars"<<endl;
                //Finish Check
                cout<<endl;
                cout<<"BANK OF CIS5"<<endl;
                cout<<endl;
                cout<<"FOR: GOTTA PAY THE RENT           "<<fholder<<" "<<lholder<<endl;
    break;
        }
            case '4': {
                //declare variable
                float mySave, // how much saved
                        hrs, 
                        aPay,bPay,cPay;//a,b,c plan pay
                char choice,bPlan; // the different plans
                //initialize variables

                //input data
                cout<<"This program calculates your monthly bill."<<endl;
                cout<<"Choose a subscription package."<<endl;
                cout<<"a:  $16.75 per month, 5 hours access.  Additional hours"<<endl;
                cout<<"    are $0.75 up to 20 hours then $1 for all additional hours."<<endl;
                cout<<"b:  $23.75 per month, 15 hours access.  Additional hours"<<endl;
                cout<<"    are $0.55 up to 25 hours then $0.70 for all additional hours."<<endl;
                cout<<"c:  $29.95 per month unlimited access."<<endl;
                cout<<"Input choice"<<endl;
                cin>>choice;
                cout<<"Input the amount of hours."<<endl;
                cin>>hrs;
                //Calculate monthly bill
                switch(choice){
                    case 'a':
                        if(hrs>=20){
                        aPay=(16.75)+((hrs-5)*.75)+(hrs-20)*1;
                        }
                        else if(hrs>=5){
                        aPay=(16.75)+((hrs-5)*.75);
                        }
                        else if(hrs<5){
                        aPay=(16.75);
                        }
                    case 'b':
                        if(hrs>=25){
                        bPay=(16.75)+((hrs-15)*.75)+(hrs-25)*.70;
                        }
                        else if(hrs>=15){
                        bPay=(16.75)+((hrs-15)*.55);
                        }
                        else if(hrs<15){
                        bPay=(23.75);
                        }
                    case 'c':
                        cPay=29.95;
                 }
                if(choice=='a'){
                    cout<<fixed<<setprecision(2);
                    cout<<"Your monthly bill is: $ "<<aPay<<endl;
                }
                if(choice=='b'){
                    cout<<fixed<<setprecision(2);
                    cout<<"Your monthly bill is: $ "<<bPay<<endl;
                }
                if(choice=='b'){
                    cout<<fixed<<setprecision(2);
                    cout<<"Your monthly bill is: $ "<<cPay<<endl;
                }
                //Calculate how much someone would save by switching
                if(hrs>28){
                    if(!(choice=='c')){
                        cout<<"The best plan for you would be plan c."<<endl;
                        if(choice=='a'){
                        mySave=(aPay-cPay);
                        }
                        if(choice=='b'){
                        mySave=bPay-cPay;
                        }
                    cout<<fixed<<setprecision(2);
                    cout<<"You would save: $ "<<mySave<<endl;
                    }
                    if(choice=='c'){
                        cout<<"Your current plan is the best plan for you."<<endl;
                    }
                }
                else if(hrs>14){
                    if(!(choice=='b')){
                        cout<<"The best plan for you would be plan b."<<endl;
                        if(choice=='a'){
                        mySave=aPay-bPay;
                        }
                        if(choice=='c'){
                        mySave=cPay-bPay;
                        }
                    cout<<fixed<<setprecision(2);
                    cout<<"You would save: $ "<<mySave<<endl;
                    }
                    if(choice=='b'){
                        cout<<"Your current plan is the best plan for you."<<endl;
                    }
                    }
                else if(hrs<=14){
                    if(!(choice=='a')){
                    cout<<"The best plan for you would be plan a."<<endl;
                    cout<<fixed<<setprecision(2);
                    cout<<"You would save: $ "<<mySave<<endl;
                    }
                    if(choice=='a'){
                        cout<<"Your current plan is the best plan for you."<<endl;
                    }
                }
                            break;
                    }
                        case '5': {
                            //declare variable
               float hrsWkd,payRate,grPay;

                //initialize variables



                //input data
                cout<<"This program calculates your gross paycheck."<<endl;
                cout<<"Please input your hourly pay rate."<<endl;  
                cin>>payRate;
                cout<<"Please input how many hours you worked."<<endl;
                cin>>hrsWkd;

                //map inputs to outputs or process the data
                if(hrsWkd>=40){
                    grPay=hrsWkd*payRate*3;
                    cout<<fixed<<setprecision(2);
                    cout<<"Your gross pay is: "<<grPay<<endl;
                }
                else if(hrsWkd>=20){
                    grPay=hrsWkd*payRate*2;
                    cout<<fixed<<setprecision(2);
                    cout<<"Your gross pay is: "<<grPay<<endl;
                }
                else if(hrsWkd>=10){
                    grPay=hrsWkd*payRate;
                    cout<<fixed<<setprecision(2);
                    cout<<"Your gross pay is: "<<grPay<<endl;
                }
                break;
        }
            case '6': {
              //declare variable
                int n,x;
                float fctrl=1.0f,sum=0.0f;
            //input data
               cout<<"This program outputs the sum of an alternating sequence."<<endl;
               cout<<"Please input how many terms"<<endl;
               cin>>n;
               cout<<"Please input the x value."<<endl;
               cin>>x;
               //map inputs to outputs or process the data
               for(int i=1,j=1;i<=n;i++,j++){
                   fctrl=fctrl*i;
                   if(!(i%2==0)){
                   sum+=(pow(-1,i+1)*(pow(x,i))/fctrl);
                }
               }
               cout<<sum<<endl;
                break;
        }
         }
    }while(choice>='1'&&choice<='6');
    
    //Process/Calculations Here
    
    //Output Located Here


    //Exit
    return 0;
    }


