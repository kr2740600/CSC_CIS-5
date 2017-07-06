#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout<<"Let's play a game of mad libs."<<endl;
    cout<<"Type in the first or last name of your instructor."<<endl;
    string instructor;
    getline(cin,instructor);
    cout<<"Type in your name."<<endl;
    string name;
    getline(cin, name);
    cout<<"Type in a food"<<endl;
    string food;
    getline(cin,food);
    cout<<"Type in a number between 100 and 120"<<endl;
    string num;
    getline(cin,num);
    cout<<"Type in an adjective"<<endl;
    string adj;
    getline(cin,adj);
    cout<<"Type in a color"<<endl;
    string color;
    getline(cin,color);
    cout<<"Type in an animal"<<endl;
    string animal;
    getline(cin,animal);
    cout<<endl<<endl;
    
    cout<<"Dear Instructor "<<instructor<<","<<endl<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl
            <<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I"<<endl
            <<"came down with a fever of "<<num<<". Next, my "<<adj<<" pet"<<endl
            <<animal<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl
            <<"because he ate it. I am currently rewriting my homework and hope you"<<endl
            <<"will accept it late."<<endl<<endl
            <<"Sincerely,"<<endl<<name;

    return 0;
}

