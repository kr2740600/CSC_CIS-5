#include <iostream>

#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //declare variables
    int days=0;
    int lbs=0;
    int again=1;
    //loop the program
    while(again==1){
        int fi,fim1,fim2;
        int n5day;
        fim2=0;
        fim1=1;
        int outLbs;
        cout<<"Enter the size of the green crud population(in pounds)"<<endl;
        cin>>lbs;
        cout<<"Enter in how the amount of time(in days)"<<endl;
        cin>>days;
        n5day=days/5;
        
        
    
        
    //calculate fib number
    for(int i=1;i<=n5day;++i){
        fi=fim1+fim2;
    fim2=fim1;
    fim1=fi;
    //
    }
    //calculate the lbs of crud
    outLbs=fi*lbs;
    cout<<"After "<<days<<" the green crud now weighs "<<outLbs<<" pounds"<<endl;
    
    //ask the user if they wish to repeat the program
    cout<<"Enter '1' to re-run the program"<<endl;
    cin>>again;
    }

    return 0;
}

