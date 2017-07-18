#include <iostream>
#include <cstdlib>

using namespace std;

int time_difference(int cchr, int ccmin, int ffhr, int ffmin);
int time_difference(int cchr, int ccmin, int ffhr, int ffmin){
    int nhr;
    int nmin;
    nhr=cchr+ffhr;
    nmin=ffmin+ccmin;
    while(nmin>=60){
        ++nhr;
        nmin-=60;
    }
    if(nmin<10){
        cout<<"The time after waiting is "<<nhr<<":0"<<nmin<<endl;
    } else{
        cout<<"The time after waiting is "<<nhr<<":"<<nmin<<endl;
    }
}

int main(int argc, char** argv) {
    
    int chr=0;
    int cmin=0;
    char tm=0;
    int nhr=0;
    int fhr;
    int fmin;
    int tr;
    char amPm;
    do{
    
    cout<<"Enter in the hours for current time"<<endl;
    cin>>chr;
    cout<<"Enter in the minutes for the current time"<<endl;
    cin>>cmin;
    cout<<"If the current time is AM enter 'A' if the current time is PM enter 'P'"<<endl;
    cin>>amPm;
    cout<<"Enter in the hours to wait"<<endl;
    cin>>fhr;
    cout<<"Enter in the minutes to wait"<<endl;
    cin>>fmin;
    
    time_difference(chr,cmin,fhr,fmin);
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>tr;
    } while(tr==1);
    return 0;
}

