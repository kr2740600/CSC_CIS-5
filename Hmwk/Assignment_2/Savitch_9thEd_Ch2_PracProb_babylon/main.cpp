#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    double n=25;
    for(int i=0; i<100;++i){
    
    double r=n/(n/2);
    double guess=(n/2+r)/2;
    cout<<guess<<endl;
    }
   
    return 0;
}

