#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
    string again="yes";
    while(again=="yes"){
    cout<<"Enter the amount of money that you wish to receive"<<endl;
    float moneyRequested;
    cin>>moneyRequested;
    cout<<"Enter the interest rate of your loan as a percentage"<<endl;
    float interestRate;
    cin>>interestRate;
    cout<<"Enter the duration of the loan(months)"<<endl;
    int loanTime;
    cin>>loanTime;
    float loanTotal=moneyRequested+moneyRequested*(interestRate/100);
    float monthlyPayment=loanTotal/loanTime;
    cout<<"You need to take out a loan for: $"<<loanTotal<<endl;
    cout<<"Your monthly payment is: $"<<monthlyPayment<<endl<<endl;
    cout<<"Do you want to run the program again?"<<endl;
    cout<<"Type in 'yes' to run the program again"<<endl;
    cin>>again;}

    return 0;
}

