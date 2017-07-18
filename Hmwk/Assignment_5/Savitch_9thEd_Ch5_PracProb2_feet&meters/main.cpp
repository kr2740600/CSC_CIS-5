#include <iostream>
#include <cstdlib>

using namespace std;

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

int main(int argc, char** argv) {
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
    
    return 0;
}

