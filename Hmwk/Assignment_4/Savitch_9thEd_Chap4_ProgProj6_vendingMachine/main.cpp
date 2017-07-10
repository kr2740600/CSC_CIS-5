#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    //declare variables
    float coins=0;
    float change;
    
    //make sure the program runs until they enter the required change
    while(coins<3.5){
        coins+=coins;
        cout<<"Please insert a coin(only dimes, nickels, and quaters are accepted"<<endl;
        cin>>coins;
        //make sure that the coin entered is valid;
        if(coins!=.25||.05||.1){
            cout<<"Please enter in a valid coin"<<endl;
            cout<<"Your change will be returned and the program will end"<<endl;
            change=coins;
            cout<<"Please take your change of: $"<<change<<endl;
            return 1;
        }
        cout<<"Total entered so far: "<<coins<<endl;
    }
    //give them their change and tell them that they will receive their purchased item
    if(coins>=3.5){
        cout<<"Enjoy your deep fried twinkie"<<endl;
        change=coins-3.5;
        cout<<"Please take your change of $"<<change<<endl;
    }

    return 0;
}

