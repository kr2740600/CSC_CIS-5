#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    //declare variables
    unsigned short number;
    char n1000s,n100s,n10s,n1s;
    int again=1;
    
    //loop the program
    while(again==1){
    //receive user input
    cout<<"Input a number to convert to Roman Numerals"<<endl;
    cout<<"Number range 1000-3000 accepted"<<endl;
    cin>>number;
    
    if(!(number>=1000&&number<=3000)){
        cout<<"Invalid number, exiting the program"<<endl;
        return 1;
    }
    
    n1000s=number/1000;
    number-=(1000*n1000s);
    n100s=number/100;
    number-=(100*n100s);
    n10s=number/10;
    number-=(10*n10s);
    n1s=number;
    
    //Roman Numeral 1000's
    switch(n1000s){
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
    
    //100's
    switch(n100s){
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";break;
        case 4:cout<<"CD";break;
        case 5:cout<<"D";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 9:cout<<"CM";break;
        default:cout<<"";
    }
    
    //10s
    switch(n10s){
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";break;
        case 4:cout<<"XL";break;
        case 5:cout<<"L";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 9:cout<<"XC";break;
        default:cout<<"";
    }
    //1s
    switch(n1s){
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";break;
        case 4:cout<<"IV";break;
        case 5:cout<<"V";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 9:cout<<"IX";break;
        default:cout<<"";
    }
    cout<<endl;
    cout<<"If you want to run the program again enter '1'"<<endl;
    cin>>again;
    }
    return 0;
}

