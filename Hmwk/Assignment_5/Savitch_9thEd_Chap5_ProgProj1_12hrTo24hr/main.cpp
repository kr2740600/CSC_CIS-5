#include <iostream>
#include <cstdlib>

using namespace std;

int time_difference_2(int cchr, int ccmin, int ffhr, int ffmin, char pm);
int time_difference_2(int cchr, int ccmin, int ffhr, int ffmin, char pm){
    int nhr;
    int nmin;
    nhr=cchr+ffhr;
    nmin=ffmin+ccmin;
    while(nmin>=60){
        ++nhr;
        nmin-=60;
    }
   
    if(pm=='P'&&nhr>12){
        nhr-=12;
        pm='A';
    }else if(pm=='A'&&nhr>12){
        nhr-=12;
        pm='P';
    }
    if(nmin<10&&pm=='P'){
        cout<<"The time after waiting is "<<nhr<<":0"<<nmin<<"PM"<<endl;
    } else if(nmin<10&&pm=='A'){
        cout<<"The time after waiting is "<<nhr<<":0"<<nmin<<"AM"<<endl;
    } else if(nmin>=10&&pm=='P'){
        cout<<"The time after waiting is "<<nhr<<":"<<nmin<<"PM"<<endl;
    } else if(nmin>=10&&pm=='A'){
        cout<<"The time after waiting is "<<nhr<<":"<<nmin<<"AM"<<endl;
    }
}

int main(int argc, char** argv) {
    
    int chr=0;
    int cmin=0;
    char ctime;
    int nhr=0;
    int fhr;
    int fmin;
    int tr;
    do{
    
    cout<<"Enter in the hours for current time"<<endl;
    cin>>chr;
    cout<<"Enter in the minutes for the current time"<<endl;
    cin>>cmin;
    cout<<"Enter in the 'A' for AM and 'P' for PM"<<endl;
    cin>>ctime;
    cout<<"Enter in the hours to wait"<<endl;
    cin>>fhr;
    cout<<"Enter in the minutes to wait"<<endl;
    cin>>fmin;
    
    
    time_difference_2(chr,cmin,fhr,fmin,ctime);
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>tr;
    } while(tr==1);
    return 0;
}

