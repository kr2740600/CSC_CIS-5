#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float totDue;
    float minPay;
    float account;
    float ovAcc;
    float intOv1k;
    float int1;
    float intFinal;
    float temp;
    //receive input from user
    cout<<"Enter in your current account balance"<<endl;
    cin>>account;
    ovAcc=account-1000;
    if(account<=1000){
        intFinal=.015*account;
    } else{
    if(ovAcc>0){
        intOv1k=ovAcc*.01;
        intFinal=.015*1000+intOv1k;
    }
    //end of else
    }
    totDue=account+intFinal;
    temp=.1*totDue;
    if(totDue<=10){
        totDue=minPay;
    }else if(temp>10){
        minPay=temp;
    } else{
        minPay=10;
    }
    
    
    cout<<"The interest due is: $"<<intFinal<<endl;
    cout<<"The total amount due is: $"<<totDue<<endl;
    cout<<"The minimum payment is: $"<<minPay<<endl;

    return 0;
}

