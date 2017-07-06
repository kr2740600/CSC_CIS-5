#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
    
    for(int i=3;i<=100;++i){
        for(int j=3;j<i;j++){
            if(i%j==0){
                break;
            } else if (i==j+1){
                cout<<i<<" ";
            }
        }
    }

    return 0;
}

