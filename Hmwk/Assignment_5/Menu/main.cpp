#include <iostream>
#include <cstdlib>
#include <cmath>

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

void get_temp(float wind, int tempt);
void get_temp(float wind, int tempt){
    float w;
    w=13.12+(0.6215*tempt)-(11.37*(pow(wind,0.16)))+
            (0.3965*tempt*(pow(wind,0.016)));
    cout<<"The wind chill makes the new temperature= "<<w<<" degrees C"<<endl;
}

int get_input();
int get_input(){
    int f;
    cout<<"Enter in the amount of feet"<<endl;
    cin>>f;
    return f;
}
int get_inches();
int get_inches(){
    int i;
    cout<<"Enter in the inches"<<endl;
    cin>>i;
    return i;
}

float convert_feet(int feet);
float convert_feet(int feet){
    float meter;
    meter=feet/3.048;
    return meter;
}

float convert_inch(int inch);
float convert_inch(int inch){
    float cent;
    float ft;
    float met;
    ft=inch/12;
    met=ft/3.048;
    cent=met*100;
    return cent;
}
void display(float met, float ent);
void display(float met, float ent){
    cout<<met<<" meters"<<endl;
    cout<<ent<<" centimeters"<<endl;
}

float convert_centi(int c);
float convert_centi(int c){
    float met,ft,inch;
    met=c/100;
    ft=.3048*met;
    inch=ft/12;
    return inch;
}

float convert_met(int m);
float convert_met(int m){
    float ft;
    ft=.3048*m;
    return ft;
}
int get_values(int incherz, int foot){
    cout<<"Enter in the number of feet"<<endl;
    cin>>foot;
    cout<<"Enter in the number of inches"<<endl;
    cin>>incherz;
    return incherz,foot;
}

int get_pounds();
int get_pounds(){
    int p;
    cout<<"Enter in the number of pounds"<<endl;
    cin>>p;
    return p;
}

int get_ounces();
int get_ounces(){
    int o;
    cout<<"Enter in the number of ounces"<<endl;
    cin>>o;
    return o;
}

float get_kilo(int pound);
float get_kilo(int pound){
    float kilo;
    kilo=pound/2.2046;
    return kilo;
}

float get_grams(int once);
float get_grams(int once){
    float kill,gramo,ptown;
    ptown=once*16;
    kill=ptown/2.2046;
    gramo=kill/1000;
    return gramo;
}

void display_prob(float ik,float ig);
void display_prob(float ik, float ig){
    cout<<"The pounds converted to: "<<ik<<" kilos"<<endl;
    cout<<"The ounces converted to: "<<ig<<" grams"<<endl;
}

int get_kilio();
int get_kilio(){
    int k;
    cout<<"Enter in the number of kilograms"<<endl;
    cin>>k;
    return k;
}

int get_gramos();
int get_gramos(){
    int g;
    cout<<"Enter in the number of grams"<<endl;
    cin>>g;
    return g;
}

float convert_kilo(int killz);
float convert_kilo(int killz){
    float p;
    p=2.2046*killz;
    return p;
}

float convert_gramos(int gramz);
float convert_gramos(int gramz){
    float ps,ks,os;
    ks=gramz/1000;
    ps=2.2046*ks;
    os=ps/16;
    return ks;
}

void display_2(int asd, int jkl);
void display_2(int asd, int jkl){
    cout<<"The kilos converted to: "<<asd<<" pounds"<<endl;
    cout<<"The grams converted to: "<<jkl<<" ounces"<<endl;
}

float get_avg(int a, int b, int c, int d);
float get_avg(int a, int b, int c, int d){
    float avg;
    avg=(a+b+c+d)/4;
    return avg;
}


float get_sd(int a, int b, int c, int d, float avg);
float get_sd(int a, int b, int c, int d, float avg){
    float s1,s2,s3,s4,final,ans;
    s1=pow((a-avg),2);
    s2=pow((b-avg),2);
    s3=pow((c-avg),2);
    s4=pow((d-avg),2);
    final=s1+s2+s3+s4;
    ans=sqrt(final);
    return ans;
}

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
    
    char choice;
    do{
        cout<<"Choose from the list of problems"<<endl;
        cout<<"Type 1 for problem 1"<<endl;
        cout<<"Type 2 for problem 2"<<endl;
        cout<<"Type 3 for problem 3"<<endl;
        cout<<"Type 4 for problem 4"<<endl;
        cout<<"Type 5 for problem 5"<<endl;
        cout<<"Type 6 for problem 6"<<endl;
        cout<<"Type 7 for problem 7"<<endl;
        cout<<"Type 8 for problem 8"<<endl;
        cout<<"Type 9 for problem 9"<<endl;
        
        cin>>choice;
        cin.ignore();
        
        switch(choice){
            case '1':{
                //problem 1
                //display variables
    int inches;
    int feet;
    float meters;
    float centim;
    int again;
    do{
    inches=get_inches();
    feet=get_input();
    meters=convert_feet(feet);
    centim=convert_inch(inches);
    display(meters,centim);
    
    cout<<"If you wish to run the program again enter 1"<<endl;
    cin>>again;
    } while(again==1);
                break;
            }
            case '2':{
                //problem 2
                //declare variables
    int ufeet;
    int uinch;
    float mets;
    float cenmet; 
    int again;
    
    do{
    //get_values(uinch,ufeet);
    cout<<"Enter in the number of feet"<<endl;
    cin>>ufeet;
    cout<<"Enter in the number of inches"<<endl;
    cin>>uinch;
    mets=convert_met(ufeet);
    cenmet=convert_centi(uinch);
    
    cout<<"Feet entered converted to: "<<mets<<" meters."<<endl;
    cout<<"Inches entered converted to: "<<cenmet<<" centimeters."<<endl;
    
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>again;
    } while(again==1);
                break;
            }
            case '3':{
                //problem 3
                //declare variables
    int pounde;
    int ouncee;
    float kilog;
    float gram;
    int ag;
    do{
    pounde=get_pounds();
    cin.ignore();
    ouncee=get_ounces();
    kilog=get_kilo(pounde);
    gram=get_grams(ouncee);
    display_prob(kilog,gram);
    cout<<endl<<"If you wish to run the program again enter 1"<<endl;
    cin>>ag;
    } while (ag==1);
    
                break;
            }
            case '4':{
                //problem 4
                int killos;
    int gramos;
    float lbs;
    float unce;
    int loop;
    
    do{
    killos=get_kilio();
    gramos=get_gramos();
    
    lbs=convert_kilo(killos);
    unce=convert_gramos(gramos);
    display_2(lbs,unce);
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>loop;
    } while(loop==1);
                break;
            }
            case '5':{
                //problem 5
                 int a,b,c,d,rerun;
    float avg;
    float sd;
    do{
    cout<<"Enter in value 1"<<endl;
    cin>>a;
    cout<<"Enter in value 2"<<endl;
    cin>>b;
    cout<<"Enter in value 3"<<endl;
    cin>>c;
    cout<<"Enter in value 4"<<endl;
    cin>>d;
    
    avg=get_avg(a,b,c,d);
    sd=get_sd(a,b,c,d,avg);
    
    cout<<"The Standard Deviation for the three values entered is: "<<sd<<endl<<endl;
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>rerun;
    } while (rerun==1);
                break;
            }
            case '6':{
                //problem 6
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
                break;
            }
            case '7':{
                //problem 7
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
                break;
            }
            case '8':{
                //problem 8
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
                break;
            }
            case '9':{
                //problem 9
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
    
                break;
            }
        }
        
    } while(choice>='1'&&choice<='9');

    return 0;
}

