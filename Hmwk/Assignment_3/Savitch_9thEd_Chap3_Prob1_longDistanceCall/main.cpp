#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    
    float callTime;
    int hours;
    int minutes;
    float callCost;
    string day;
    string time;
    string shours;
    string sminutes;
    string again="yes";
    while(again=="yes"){
    
    //Receive user input for time
    cout<<"Please enter the time at which your phone call started in 24-hour (hh:mm) format"<<endl;
    getline(cin,time);
    //User input for day
    cout<<"Enter in the day of the week(Mo, Tu, We, Th, Fr, Sa, Su)"<<endl;
    getline(cin,day);
    //user input for call length
    cout<<"Enter in the length of the phone call (minutes)"<<endl;
    cin>>callTime;
    
    //split the time into hours and minutes
    shours=time.substr(0,2);
    sminutes=time.substr(3,time.length());
    
    //convert the strings into int
    hours=stoi(shours);
    minutes=stoi(sminutes);
    if(hours>=8&&hours<=18&&day!="Sa"||"sA"||"SA"||"sa"||"Su"||"su"||"SU"||"sU"){
        //.40 a minute
        callCost=.4*callTime;
    } else if(hours<=8&&hours>=18&&day!="Sa"||"sA"||"SA"||"sa"||"Su"||"su"||"SU"||"sU"){
        callCost=.25*callTime;
    } else {
        callCost=.15*callTime;
    }
    
    cout<<"The cost of your call was: $"<<callCost<<endl;
    
    cout<<"If you wish to run the program again enter 'yes', type anything else to exit"<<endl;
    cin>>again;
   
    }
    
    return 0;
}

