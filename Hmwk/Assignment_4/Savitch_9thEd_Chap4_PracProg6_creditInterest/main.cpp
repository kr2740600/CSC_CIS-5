#include <iostream>
#include <cstdlib>

using namespace std;

//functions
float get_interest(float balance, float rate, float time);
float get_interest(float balance, float rate, float time){
    float interest;
    int counter;
    float temp;
    interest=balance*rate;
    counter++;
    do{
       temp=interest*rate;
       interest=temp;
       counter++;
        
    } while (counter<=time);
}


int main(int argc, char** argv) {
    
    float intBal;
    float intRate;
    float months;
    float cint;
    int again;
    //loop the program
    do{
    
    //get values from user
    cout<<"Enter the initial balance"<<endl;
    cin>>intBal;
    cout<<"Enter the monthly interest rate"<<endl;
    cin>>intRate;
    cout<<"Enter in the number of months which interest must be payed"<<endl;
    cin>>months;
    
    //compute interest
    cint=get_interest(intBal,intRate,months);
    
    //output the values
    cout<<"After "<<months<<" months the interest is $"<<cint<<endl<<endl;
    cout<<"Enter 1 to run the program again"<<endl;
    cin>>again;
    } while (again==1);
    
    return 0;
}

