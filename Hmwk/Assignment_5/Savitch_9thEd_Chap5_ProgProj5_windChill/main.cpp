#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void get_temp(float wind, int tempt);
void get_temp(float wind, int tempt){
    float w;
    w=13.12+(0.6215*tempt)-(11.37*(pow(wind,0.16)))+
            (0.3965*tempt*(pow(wind,0.016)));
    cout<<"The wind chill makes the new temperature= "<<w<<" degrees C"<<endl;
}

int main(int argc, char** argv) {
    
    float wspeed;
    int temp;
    
    cout<<"Enter in the wind speed"<<endl;
    cin>>wspeed;
    cout<<"Enter in the temperature"<<endl;
    cin>>temp;
    while(temp<10){
        cout<<"Please enter in a valid temperate (must be greater or equal to 10"<<endl;
        cin>>temp;
    }
    get_temp(wspeed,temp);
    
    return 0;
}

