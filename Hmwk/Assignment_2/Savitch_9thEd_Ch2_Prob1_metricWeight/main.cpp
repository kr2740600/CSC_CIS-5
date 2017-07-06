#include <iostream>

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float userCereal=0.00;
    do{
    cout<<"Enter the weight of a cereal box in ounces."<<endl;
    cout<<"To end the loop enter type in the number 0"<<endl;
    float userCereal=0.00;
    cin>>userCereal;
    float metricTon=35263.92;
    float outputMetric=0.00;
    outputMetric=userCereal/metricTon;
    float numBoxes=0.00;
    numBoxes=metricTon/userCereal;
    cout<<"The weight of the cereal in metric tons is "<<outputMetric<<endl;
    cout<<"The number of cereal boxes needed to reach one metric ton is "<<numBoxes<<endl;
    } while(userCereal!=0);
    
    return 0;
}

