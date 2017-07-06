/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on June 26, 2017, 10:35 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


 
int main(int argc, char** argv) {
    int quarter, nickel, penny, dime;
    cout<<"Enter the number of quarters: "<<endl;
    cin>>quarter;
    cout<<"Enter the number of dimes: "<<endl;
    cin>>dime;
    cout<<"Enter the number of nickels: "<<endl;
    cin>>nickel;
    cout<<"Enter the number of pennies: "<<endl;
    cin>>penny;
    int totalVal=0;
    totalVal=(quarter*25)+(dime*10)+(nickel*5)+penny;
    cout<<"The coins are worth "<<totalVal<<" cents"<<endl;

    return 0;
}

