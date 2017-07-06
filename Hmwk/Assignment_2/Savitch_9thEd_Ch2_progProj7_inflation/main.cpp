#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    float itemCost;
    int years;
    int inflation;
    cout<<"Enter in how much the item currently cost"<<endl;
    cin>>itemCost;
    cout<<"Enter in the amount of years in which the item will be purchased"<<endl;
    cin>>years;
    cout<<"What is the rate of inflation(enter as a percentage)"<<endl;
    cin>>inflation;
    for(int i=1; i<=years;++i){
        itemCost+=(itemCost*inflation/100);
    }
    cout<<"After "<<years<<" years the item will now cost $"<<itemCost<<endl;

    return 0;
}

