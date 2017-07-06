#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    //declare variables
    int a=0;
    int b=0;
    int c=0;
    int again=1;
    float real;
    float imagine;
    float root1;
    float root2;
    float deter;
    
    while(again==1){
        
        //accept input
        cout<<"Please enter in the value for a, b, and c to calculate the roots"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        
        //calculate determinant
        deter=(b*b)-(4*a*c);
        
        //calculate root values
        if(deter>0){
            root1=(-b+sqrt(deter))/(2*a);
            root2=(-b-sqrt(deter))/(2*a);
            cout<<"The roots are different and real"<<endl;
            cout<<"Value 1= "<<root1<<endl;
            cout<<"Value 2="<<root2<<endl;
        } else if(deter==0){
            cout<<"The roots are the same and real"<<endl;
            root1=(-b+sqrt(deter))/2*a;
            cout<<"The root is "<<root1<<endl;
        } else {
            real=-b/(2*a);
            imagine=sqrt(-deter)/(2*a);
            cout<<"The roots are different and complex"<<endl;
            cout<<"Value 1= "<<real<<"+"<<imagine<<"i"<<endl;
            cout<<"Value 2= "<<real<<"-"<<imagine<<"i"<<endl;
        }
        
        cout<<"If you wish to run the program again enter 1"<<endl;
        cin>>again;
    }

    return 0;
}

