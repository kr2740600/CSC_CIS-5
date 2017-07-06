//System Libraries
#include <iostream>//input output
#include <cmath>//for pow function
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float ntimes;//required for pow
    float pi;
    int n=-1;
    float part1;
    float final;
    int again=1;
    
    while(again==1){
    
    //Input Data
    cout<<"Input a number to calculate pie(the larger the number the more precise pie will be."<<endl;
    cin>>ntimes;
    
     for(int i=1; i<=ntimes; ++i){
       part1=1/(n+2);
       if(i%2==0){
           part1=-part1;
       }
       final+=part1;
       
    }
      
    //calculate pi
    pi=4*(final+(pow(-1.0,ntimes)/(2*ntimes+1)));
    
    //output pi
    cout<<"Your approximate value of pi: "<<pi<<endl;
    cout<<"To run the program again enter '1'"<<endl;
    cin>>again;
    }
    return 0;
}

