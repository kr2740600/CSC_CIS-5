#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float get_avg(int a, int b, int c, int d);
float get_avg(int a, int b, int c, int d){
    float avg;
    avg=(a+b+c+d)/4;
    return avg;
}


float get_sd(int a, int b, int c, int d, float avg);
float get_sd(int a, int b, int c, int d, float avg){
    float s1,s2,s3,s4,final,ans;
    s1=pow((a-avg),2);
    s2=pow((b-avg),2);
    s3=pow((c-avg),2);
    s4=pow((d-avg),2);
    final=s1+s2+s3+s4;
    ans=sqrt(final);
    return ans;
}

int main(int argc, char** argv) {
    
    //declare variables
    int a,b,c,d,rerun;
    float avg;
    float sd;
    do{
    cout<<"Enter in value 1"<<endl;
    cin>>a;
    cout<<"Enter in value 2"<<endl;
    cin>>b;
    cout<<"Enter in value 3"<<endl;
    cin>>c;
    cout<<"Enter in value 4"<<endl;
    cin>>d;
    
    avg=get_avg(a,b,c,d);
    sd=get_sd(a,b,c,d,avg);
    
    cout<<"The Standard Deviation for the three values entered is: "<<sd<<endl<<endl;
    cout<<"If you wish to run the program again enter '1'"<<endl;
    cin>>rerun;
    } while (rerun==1);

    return 0;
}

