#include <iostream>
#include <cstdlib>

using namespace std;

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

int main(int argc, char** argv) {
    //declare variables
    int pounde;
    int ouncee;
    float kilog;
    float gram;
    int ag;
    do{
    pounds=get_pounds();
    cin.ignore();
    ounces=get_ounces();
    kilog=get_kilo(pounde);
    gram=get_grams(ouncee);
    display_prob(kilog,gram);
    cout<<endl<<"If you wish to run the program again enter 1"<<endl;
    cin>>ag;
    } while (ag==1);
    
    return 0;
}

