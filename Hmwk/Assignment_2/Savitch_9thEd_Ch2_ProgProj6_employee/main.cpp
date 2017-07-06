#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    string again="yes";
    while(again=="yes"){
    
    cout<<"How many hours did you work this week"<<endl;
    int hoursWorked;
    cin>>hoursWorked;
    cout<<"How many dependents do you have"<<endl;
    int numDependents;
    cin>>numDependents;
    //workers gross pay
    float grossPay=0;
    if(hoursWorked<=40){
       grossPay=16.78*hoursWorked; 
    } else if(hoursWorked>40){
        int otHours=hoursWorked-40;
        grossPay=16.78*40+otHours*(16.78*1.5);
    }
    //taxes withHeld
    float socialSecurity=.06* grossPay;
    float fedIncome=grossPay * .14;
    float stateIncome=grossPay * .05;
    float unionDues=10;
    float dependents=0;
    if(numDependents>=3){
        dependents=35;
    }
    float netPay=grossPay-socialSecurity-fedIncome-stateIncome-unionDues-dependents;
    
    cout<<"Your gross pay is: $"<<grossPay<<endl;
    cout<<"Social Security: $"<<socialSecurity<<endl;
    cout<<"Federal Income Taxes: $"<<fedIncome<<endl;
    cout<<"State Income Taxes: $"<<stateIncome<<endl;
    cout<<"Union Dues: $"<<unionDues<<endl;
    cout<<"Dependents: $"<<dependents<<endl;
    cout<<"Net Take-Home Pay: $"<<netPay<<endl;
    cout<<"Do you want to run the program again?"<<endl;
    cout<<"If so enter 'yes'"<<endl;
    cin>>again;}

    return 0;
}

