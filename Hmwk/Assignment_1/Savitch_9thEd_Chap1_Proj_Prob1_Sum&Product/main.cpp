/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on June 26, 2017, 10:42 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num1=0;
    int num2=0;
    int sum=0;
    int product=0;
    cout<<"Enter in an integer"<<endl;
    cin>>num1;
    cout<<"Enter another integer"<<endl;
    cin>>num2;
    sum=num1 + num2;
    product= num1 * num2;
    cout<<"The sum of the integers is: "<<sum<<endl;
    cout<<"The product of the integers is: "<<product<<endl;
    

    return 0;
}

