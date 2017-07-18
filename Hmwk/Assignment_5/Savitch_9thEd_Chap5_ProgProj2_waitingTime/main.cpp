#include <iostream>
#include <cstdlib>

using namespace std;

int convert_timeo(int hz, char tme);
int convert_timeo(int hz, char tme){
    if(tme=='P'&&hz>12){
        hz-=12;
        tme='A';
    }else if(tme=='A'&&hz>12){
        hz-=12;
        tme='P';
    }
    return hz;
}
void display_24hr(int ha,int mina, char timea);
void display_24hr(int ha,int mina, char timea){
    if(mina<10&&timea=='P'){
        cout<<"The time is "<<ha<<":0"<<mina<<"PM"<<endl;
    } else if(mina<10&&timea=='A'){
        cout<<"The time is "<<ha<<":0"<<mina<<"AM"<<endl;
    }else if(mina>=10&&timea=='P'){
        cout<<"The time is "<<ha<<":"<<mina<<"PM"<<endl;
    }else if(mina>=10&&timea=='A'){
        cout<<"The time is "<<ha<<":"<<mina<<"AM"<<endl;
    }
}


int main(int argc, char** argv) {
    //declare variables
    int hro;
    int mino;
    char tmo;
    int new_hr;
    
    cout<<"Enter the following times in 24 hr notation"<<endl;
    cout<<"Enter in the hours"<<endl;
    cin>>hro;
    cout<<"Enter in the minutes"<<endl;
    cin>>mino;
    cout<<"Enter 'A' for AM and 'P' for PM"<<endl;
    cin>>tmo;
    
    new_hr=convert_timeo(hro,tmo);
    
    display_24hr(new_hr,mino,tmo);

    return 0;
}

