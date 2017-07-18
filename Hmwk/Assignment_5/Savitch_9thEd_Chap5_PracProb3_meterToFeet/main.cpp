#include <iostream>
#include <cstdlib>

using namespace std;

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

int main(int argc, char** argv) {
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

    return 0;
}

