#include <iostream>

#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    cout<<"Enter your current speed in MPH"<<endl;
    float speedMPH=0.00;
    float speedTime=0.00;
    cin>>speedMPH;
    speedTime=60/speedMPH;
    cout<<"You are running a mile in "<<speedTime<<" minutes"<<endl;

    return 0;
}

