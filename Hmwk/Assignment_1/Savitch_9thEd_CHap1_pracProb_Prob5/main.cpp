#include <iostream>

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int width=0;
    int height=0;
    int totalLength=0;
    cout<<"Enter the width of the fence you wish to build: "<<endl;
    cin>>width;
    cout<<"Enter the height of the fence you wish to build: "<<endl;
    cin>>height;
    totalLength=width * height;
    cout<<"A total length of "<<totalLength<<" is needed for you to build the ";
           cout<< "fence"<<endl;
    return 0;
}

