/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on June 26, 2017, 10:19 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char c;
    cout<<"What character would you like to use to make a big letter C"<<endl;
    cin>>c;
    
    cout<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<"  "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<"  "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    return 0;
}

