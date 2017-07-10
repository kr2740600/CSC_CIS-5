#include <iostream>

using namespace std;
//function declaration
float miles_per_gallon(float m, float g);

//function definition
float miles_per_gallon(float m,float liter){
    const float g=0.264179/liter;
    float mpg;
    mpg=m/g;
    return mpg;
}
int main(){
    //define variables
    float litre=0;
    float miles=0;
    int again=1;
    
    //allow the user to run the program as many times as they wish
    while(again==1){
    
    //get user input for variables
    cout<<"Enter the liters of gas consumed: "<<endl;
    cin>>litre;
    cout<<"Enter the number of miles traveled: "<<endl;
    cin>>miles;
    
    //get the mpg
    float milespg=miles_per_gallon(miles,litre);

    //output the data
    cout<<"The car got "<<milespg<<" miles per gallon on this trip."<<endl;
    
    //loop the program
    cout<<"Do you wish to run the program again?\nIf so enter '1' "<<endl;
    cin>>again;
    }
    
    return 0;
}