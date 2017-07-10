#include <iostream>
#include <cstdlib>

using namespace std;
//hat function
float get_hat_size(float weight, float height);
float get_hat_size(float weight, float height){
    float hat=(weight/height)*2.9;
    return hat;
}
//jacket function
float get_jacket_size(float weight, float height);
float get_jacket_size(float weight, float height, int age){
    float jacket=(height*weight)/288;
    int eighth=0;
    int tAge=age-30;
    eighth=tAge/10;
   float jSize=jacket+((1/8)*eighth);
   return jSize;
}

//waist function
float get_waist_size(float weight, int age);
float get_waist_size(float weight, int age){
    float tWaist=weight/5.7;
    int tAge=age-28;
    int tenth=tAge/2;
    float waist=tWaist+((1/10)*tenth);
    return waist;
}


int main(int argc, char** argv) {
    
    //declare variables
    float w;
    float h;
    int a;
    int again=1;
    float jsize;
    float wsize;
    float hSize;
    float a10;
    float nwsize;
    float njsize;
    
    while(again==1){
    
    //get the needed values
    cout<<"Please enter in your height(in inches)"<<endl;
    cin>>h;
    cout<<"Please enter in your weight(in pounds)"<<endl;
    cin>>w;
    cout<<"Please enter in your age"<<endl;
    cin>>a;
    
    //calculate
    hSize=get_hat_size(w,h);
    jsize=get_jacket_size(w,h,a);
    wsize=get_waist_size(w,a);
    //after 10 years
    
    njsize=get_jacket_size(w,h,a+10);
    nwsize=get_waist_size(w,a+10);
    
    cout<<"Your current waist size is: "<<wsize<<endl;
    cout<<"Your current jacket size is: "<<jsize<<endl;
    cout<<"Your current hat size is: "<<hSize<<endl;
    cout<<"Your jacket size in 10 years is: "<<njsize<<endl;
    cout<<"Your waist size in 10 years is: "<<nwsize<<endl;
    
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>again;
    }

    return 0;
}

