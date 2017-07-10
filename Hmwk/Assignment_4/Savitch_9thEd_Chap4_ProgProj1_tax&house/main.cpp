#include <iostream>
#include <cstdlib>

using namespace std;
//functions
float get_annual_mortgage(float principal,float intial);
float get_annual_mortgage(float principal,float initial){
    float annual;
    annual=(.03*principal)+(.06*initial);
    return annual;
}

//calculate initial balance
float get_initial_balance(float hprice, float downpay);
float get_initial_balance(float hprice, float downpay){
    float intBalance;
    intBalance=hprice-downpay;
    return intBalance;
}

//calculate final cost
float get_cost(float annual,float savings);
float get_cost(float annual, float savings){
    float cost;
    cost=annual-savings;
    return cost;
}

//calculate taxes
float get_taxes(float intpay);
float get_taxes(float intpay){
    float tax;
    tax=.35*intpay;
    return tax;
}


int main(int argc, char** argv) {
    //declare variables
    float aMort;
    float cost;
    float taxSav;
    float intBal;
    float intPay;
    float price;
    float down;
    int again=1;
    
    //loop the program
    while(again==1){
    
    //get the values from the user
    cout<<"Enter in the price of the property"<<endl;
    cin>>price;
    cout<<"Enter in the downpayment on the property"<<endl;
    cin>>down;
    cout<<"Enter the interest payment on the property"<<endl;
    cin>>intPay;
    
    //get the taxes
    taxSav=get_taxes(intPay);
    
    //get the inital balance
    intBal=get_initial_balance(price,down);
    
    //get the annual mortgage
    aMort=get_annual_mortgage(intBal,price);
    
    //get the cost
    cost=get_cost(aMort,taxSav);
    
    //output to user
    cout<<"The annual after tax cost of the new property is: $"<<cost<<endl<<endl;
    cout<<"Enter '1' to run the program again"<<endl;
    cin>>again;
}
    

    return 0;
}

