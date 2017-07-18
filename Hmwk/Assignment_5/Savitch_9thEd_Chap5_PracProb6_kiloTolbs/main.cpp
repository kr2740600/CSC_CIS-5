#include <iostream>
#include <cstdlib>

using namespace std;

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

int main(int argc, char** argv) {
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

    return 0;
}

