#include <iostream>

using namespace std;
//function declaration
float miles_per_gallon(float m, float g);

//function definition
float miles_per_gallon(float m,float liter){
    float g=0.264179/liter;
    float mpg;
    mpg=m/g;
    return mpg;
}
int main(){
    //define variables
    float litre1;
    float litre2;
    float miles1;
    float miles2;
    int again=1;
    
    //allow the user to run the program as many times as they wish
    while(again==1){
    
    //get user input for variables
    cout<<"Enter the liters of gas consumed for car 1: "<<endl;
    cin>>litre1;
    cout<<"Enter the liters of gas consumed for car 2: "<<endl;
    cin>>litre2;
    cout<<"Enter the number of miles traveled for car 1: "<<endl;
    cin>>miles1;
    cout<<"Enter the number of miles traveled for car 2: "<<endl;
    cin>>miles2;
    
    //get the mpg
    float mpg1=miles_per_gallon(miles1,litre1);
    float mpg2=miles_per_gallon(miles2,litre2);

    //output the data
    cout<<"Car 1 got "<<mpg1<<" miles per gallon on this trip."<<endl;
    cout<<"Car 2 got "<<mpg2<<" miles per gallon on this trip."<<endl;
    if(mpg1>mpg2){
        cout<<"Car 1 is more fuel efficient"<<endl;
    } else if(mpg1<mpg2){
        cout<<"Car 2 is more fuel efficient"<<endl;
    }
    
    //loop the program
    cout<<"Do you wish to run the program again?\nIf so enter '1' "<<endl;
    cin>>again;
    }
    
    return 0;
}