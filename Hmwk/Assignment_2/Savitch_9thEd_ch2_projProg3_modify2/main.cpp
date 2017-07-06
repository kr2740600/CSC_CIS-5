#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    
    string again="yes";
    while(again=="yes"){
        float userSalary;
    float retroactive=0.00;
    float newAnnual=0.00;
    float newMonthly=0.00;
    cout<<"Enter in your previous annual salary"<<endl;
    cout<<"Enter 0 to exit the program"<<endl;
    cin>>userSalary;
    float const payIncrease=userSalary*.076;
    retroactive=payIncrease/12;
    cout<<"Enter in the amount of months of retroactive pay due"<<endl;
    int monthsDue;
    cin>>monthsDue;
    float newRetro=retroactive*monthsDue;
    newAnnual=userSalary*1.076;
    newMonthly=newAnnual/12;
    cout<<"Retroactive pay due: $"<<newRetro<<endl;
    cout<<"New annual salary: $"<<newAnnual<<endl;
    cout<<"New monthly salary: $"<<newMonthly<<endl;
    
    cout<<"Do you want to run the program again? type 'yes' to run it again"<<endl;
    cin>>again;}
    
    
    return 0;
}