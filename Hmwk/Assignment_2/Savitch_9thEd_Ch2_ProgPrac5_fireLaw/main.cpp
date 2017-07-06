#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


int main(int argc, char** argv) {
    
    string again="yes";
    while(again=="yes"){
    cout<<"Enter in the maximum capacity of the room"<<endl;
    int maxCapacity;
    cin>>maxCapacity;
    cout<<"Enter how many people are attending the meeting"<<endl;
    int numPeople;
    cin>>numPeople;
    if(numPeople<=maxCapacity){
        cout<<"It is legal to hold the meeting"<<endl;
        int addPeople= maxCapacity-numPeople;
        cout<<"You can have "<<addPeople<<" more people in the room."<<endl;
    } else if(numPeople>maxCapacity){
        cout<<"Your meeting cannot be held as planned as it violates fire regulations"<<endl;
        int subPeople=numPeople-maxCapacity;
        cout<<subPeople<<" must be excluded in order to hold the meeting"<<endl;
    }
    cout<<"Do you wish to run the program again?"<<endl;
    cout<<"If so type in 'yes'"<<endl;
    cin>>again;}

    return 0;
}

