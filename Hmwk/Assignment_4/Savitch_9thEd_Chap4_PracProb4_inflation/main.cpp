#include <iostream>
#include <cstdlib>

using namespace std;

double rate_of_inflation(double p, double c);

double rate_of_inflation(double p, double c){
    double diff=c-p;
    double inf=(diff/p)*100;
    return inf;
}

int main(int argc, char** argv) {
    //define variables
    double past;
    double current;
    double infl;
    int again=1;
    
    while(again==1){
    //get the old and current price
    cout<<"Enter the price of the item one year ago"<<endl;
    cin>>past;
    cout<<"Enter the current price of the item"<<endl;
    cin>>current;
    
    //get inflation
    infl=rate_of_inflation(past,current);
    
    //output inflation
    cout<<"The estimated inflation rate is: "<<infl<<"%"<<endl;
    
    //loop the program
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>again;
    }
    
    return 0;
}

