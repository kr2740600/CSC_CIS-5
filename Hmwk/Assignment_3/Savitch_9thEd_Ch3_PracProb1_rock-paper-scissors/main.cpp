#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    string again="yes";
    while(again=="yes"){
    string user1;
    string user2;
    bool user1win=false;
    bool user2win=false;
    
    cout<<"Welcome to Rock, Paper, Scissors: "<<endl;
    cout<<"Paper covers rock, Rock breaks scissors, Scissors cut paper, or Nobody wins"<<endl;
    cout<<"Please enter R for rock, P for paper, or S for scissors"<<endl;
    cout<<"Player 1 enter your choice: "<<endl;
    cin>>user1;
    cout<<"Player 2 enter your choice: "<<endl;
    cin>>user2;
    if(user1=="P"||"p"&&user2=="R"||"r"){
        user1win=true;
        cout<<"Paper covers rock"<<endl;
    } else if(user1=="P"||"p"&&user2=="S"||"s"){
        user2win=true;
        cout<<"Scissors cut paper"<<endl;
    } else if(user1=="R"||"r"&&user2=="P"||"p"){
        user2win=true;
        cout<<"Paper covers rock"<<endl;
    } else if(user1=="R"||"r"&&user2=="S"||"s"){
        user1win=true;
        cout<<"Rock breaks scissors"<<endl;
    } else if(user1=="S"||"s"&&user2=="R"||"r"){
        user2win=true;
        cout<<"Rock break scissors"<<endl;
    } else if(user1=="s"||"S"&&user2=="P"||"p"){
        user1win=true;
        cout<<"Scissors cut paper"<<endl;
    }
    //
    if(user1win==true){
        cout<<"Player 1 won"<<endl;
    } else if(user2win==true){
        cout<<"Player 2 won"<<endl;
    } else if(user1win==false && user2win==false){
        cout<<"Nobody wins"<<endl;
    }
    
    cout<<"Do you wish to play again?"<<endl<<"If so, enter 'yes'"<<endl;
    cin>>again;
    }

    return 0;
}

