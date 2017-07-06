/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on June 26, 2017, 10:26 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

const float GRAVITY=3.2714e1f;
const float CNVFTM=3.281f;


/*
 * 
 */
int main(int argc, char** argv) {
    float altFt, altM, time;
    cout<<"This problem calculates the altitude drop in free fall"<<endl;
    cout<<"Input the measured time in seconds for the object to drop"<<endl;
    cin>>time;
    //
    altFt=GRAVITY*time*time/2;
    altM=altFt/CNVFTM;
    //output
    cout<<"The distance dropped = "<<altFt<<"(ft)"<<endl;
    cout<<"The distance dropped = "<<altM<<"(m)"<<endl;
    
    return 0;
}

