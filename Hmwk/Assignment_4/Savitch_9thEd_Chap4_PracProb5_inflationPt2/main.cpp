#include <iostream>
#include <cstdlib>

using namespace std;

double rate_of_inflation(double p, double c);

double rate_of_inflation(double p, double c){
    double diff=c-p;
    double inf=(diff/p);
    return inf;
}

int main(int argc, char** argv) {
    //define variables
    double past;
    double current;
    double infl;
    int again=1;
    double year1;
    double year2;
    
    while(again==1){
    //get the old and current price
    cout<<"Enter the price of the item one year ago"<<endl;
    cin>>past;
    cout<<"Enter the current price of the item"<<endl;
    cin>>current;
    
    //get inflation
    infl=rate_of_inflation(past,current);
    
    //output inflation
    cout<<"The estimated inflation rate is: "<<infl*100<<"%"<<endl;
    
    //get the cost after 1 year
    year1=(current*infl)+current;
    
    //get the cost after 2 years
    year2=(year1*infl)+year1;
    
    cout<<"The cost of the item in one year= $"<<year1<<endl;
    cout<<"The cost of the item in two years= $"<<year2<<endl;
    
    //loop the program
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>again;
    }
    
    return 0;
}

