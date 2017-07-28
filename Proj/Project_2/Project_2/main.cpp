#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>


using namespace std;
//create object
/*class Player{
public:
    //variables
    
    //functions
    Player(int die[],int score,int rounds,int games);
    int roll_the_dice();
    void display();
    void writeFile();
    
private:
    //
    int dice[];
    int points;
    int gplayed;
    int roundz;
    
      
};

//class Functions;
Player::Player(int die[],int score,int rounds,int games):
dice(die),points(score),roundz(rounds),gplayed(games)
{};

int Player::roll_the_dice(){
    //create vector to store dice
    
    int random;
    for(int i=0;i<9;++i){
        srand(time(NULL));
        dice[i]=rand()%6+1;
        //dice[i]=random;
    }
    return dice;
}*/


//my function
//create function to introduce the game and its rules
void explain_rules();
void explain_rules(){
    cout<<"The following game is a simple dice game called Bunco"<<endl;
    cout<<"Bunco is played by players rolling nine dice and trying to get a value"<<endl;
    cout<<"Equal to the round(for example if its round 4 then players should try to roll a 4)"<<endl;
    cout<<"Each time the die is rolled and the number matches the round it is known as Bunco"<<endl;
    cout<<"And the player receives a point, whoever has the most points at the end is the winner"<<endl<<endl;
}

//create a function to roll the die from 1-6
vector<int> roll_the_dice();
vector<int> roll_the_dice(){
    vector <int> dice;
    
    for(int i=0;i<9;++i){
        int random=0;
        //srand(time(NULL));
        random=rand()%6+1;
        dice.push_back(random);
    }
    
    return dice; 
}

//create function that makes a save file that stores all points and games played
void write_to_file(ofstream&save, int point, int games);
void write_to_file(ofstream&save, int point, int games){
    int tpoint;
    int tgames;
    tgames+=games;
    tpoint+=point;
    save<<"Your total points= "<<tpoint<<endl;
    save<<"The total number of games played= "<<tgames<<endl;
}

//display the value of each roll
void display_roll(vector<int>die);
void display_roll(vector<int>die){
    for(int i=0;i<die.size();++i){
        cout<<"Dice: "<<i+1<<" rolled "<<die[i]<<endl;
    }
    cout<<endl;
}

//create a display to show what dice the AI rolled
void display_AI(vector<int>die, int aiNum);
void display_AI(vector<int>die, int aiNum){
    cout<<"AI "<<aiNum<<" rolled:"<<endl;
    for(int i=0;i<9;++i){
        cout<<"Dice "<<i+1<<" rolled "<<die[i]<<endl;
    }
    cout<<endl;
}

//if the die matches the round number give a point
int get_points(vector<int>die,int round);
int get_points(vector<int>die,int round){
    int point;
    for(int i=0;i<9;++i){
        if(die[i]==round){
            point++;
        }
    }
    return point;
}

//display the total games, points earned, and current round
void display_results(int points,int games, int round);
void display_results(int points,int games, int round){
    cout<<"Your current number of points: "<<points<<endl;
    cout<<"The current round is: "<<round<<endl;
    if(games==1){
        cout<<"You have played "<<games<<" game"<<endl<<endl;
    }else{
        cout<<"You have played "<<games<<" games"<<endl<<endl;
    }
}

void aiPoints(int p,int ain);
void aiPoints(int p,int ain){
    cout<<"AI #"<<ain<<" has "<<p<<" points"<<endl;
}

int main(int argc, char** argv) {
    
    //declare variables
    char numPlay;//number of players
    int rounds;
    string again;
    vector<int>die;
    vector<int>ai1;
    vector<int>ai2;
    vector<int>ai3;
    int ai1p;
    int ai2p;
    int ai3p;
    int wins;
    int points;
    int gplayed;
    bool bdie;
    char RuSure;
    ofstream save;
    int start;
     
    //initialize variables
    points=0;
    rounds=0;
    gplayed=0;
    
    //explain the rules but only once at the beginning of each game
    explain_rules();
    
    //ask the player how many people they are playing with
    cout<<"Do you want to play this game against AI?"<<endl;
    cout<<"Enter in the number of players to play against(up to 3)"<<endl;
    numPlay=0;
    cin>>numPlay;
    
    
    //ask the user if they wish to start
    cout<<"Enter '1' to start the program"<<endl;
    cin>>start;
    srand(time(NULL));
    //start the program
    if(start==1){
        switch(numPlay){
            case'0':{
                //loop the program as many times as the user wishes
    do{
        //at the start of each round increase the round number
        rounds++;
        
        //roll the dice
        die=roll_the_dice();
        
        //let the player know what numbers they rolled
        display_roll(die);
        
        //check to see if die matches round number
        points=get_points(die,rounds);
        
        //at the end of the game add 1 to the number of games played
        gplayed++;
        //display the results to the user
        display_results(points,gplayed,rounds);
        
        //open the save file
        save.open("Save_Data.txt");
        //output the data to the save file
        write_to_file(save,points,gplayed);
        
        //ask the user if they would like to re run the program
        cout<<"Do you wish to play again(y/n)"<<endl;
        getline(cin,again);
        cin.ignore();
        //confirm that the user intended to quit
        if(again!="y"||again!="Y"){
            cout<<"Are you sure you want to quit?"<<endl;
            cout<<"If so type 'Q' or 'q' to quit"<<endl;
            cin>>RuSure;
        }
        //end the program if the user enters required characters
        if(RuSure=='Q'||RuSure=='q'){
            again='n';
        }
        else{
            again="y";
        }
    } while(again=="y"||again=="Y");
            }//no AI
            
            case'1':{
                           //loop the program as many times as the user wishes
    do{
        //at the start of each round increase the round number
        rounds++;
        
        //roll the dice
        die=roll_the_dice();
        ai1=roll_the_dice();
        
        //let the player know what numbers they rolled
        display_roll(die);
        
        //display the AI numbers
        display_AI(ai1,1);
        
        //check to see if die matches round number
        points=get_points(die,rounds);
        ai1p=get_points(ai1,rounds);
        //at the end of the game add 1 to the number of games played
        gplayed++;
        //display the results to the user
        display_results(points,gplayed,rounds);
        
        //display AIs points
        aiPoints(ai1p,1);
        //open the save file
        save.open("Save_Data.txt");
        //output the data to the save file
        write_to_file(save,points,gplayed);
        
        //ask the user if they would like to re run the program
        cout<<"Do you wish to play again(y/n)"<<endl;
        getline(cin,again);
        cin.ignore();
        //confirm that the user intended to quit
        if(again!="y"||again!="Y"){
            cout<<"Are you sure you want to quit?"<<endl;
            cout<<"If so type 'Q' or 'q' to quit"<<endl;
            cin>>RuSure;
        }
        //end the program if the user enters required characters
        if(RuSure=='Q'||RuSure=='q'){
            again='n';
        }
        else{
            again="y";
        }
    } while(again=="y"||again=="Y");
            }//one AI
            
            case'2':{
                   //loop the program as many times as the user wishes
    do{
        //at the start of each round increase the round number
        rounds++;
        
        //roll the dice
        die=roll_the_dice();
        ai1=roll_the_dice();
        ai2=roll_the_dice();
        
        //let the player know what numbers they rolled
        display_roll(die);
        
        //display the AI numbers
        display_AI(ai1,1);
        display_AI(ai2,2);
        
        //check to see if die matches round number
        points=get_points(die,rounds);
        ai1p=get_points(ai1,rounds);
        ai2p=get_points(ai2,rounds);
        //at the end of the game add 1 to the number of games played
        gplayed++;
        //display the results to the user
        display_results(points,gplayed,rounds);
        
        //display AIs points
        aiPoints(ai1p,1);
        aiPoints(ai2p,2);
        //open the save file
        save.open("Save_Data.txt");
        //output the data to the save file
        write_to_file(save,points,gplayed);
        
        //ask the user if they would like to re run the program
        cout<<"Do you wish to play again(y/n)"<<endl;
        getline(cin,again);
        cin.ignore();
        //confirm that the user intended to quit
        if(again!="y"||again!="Y"){
            cout<<"Are you sure you want to quit?"<<endl;
            cout<<"If so type 'Q' or 'q' to quit"<<endl;
            cin>>RuSure;
        }
        //end the program if the user enters required characters
        if(RuSure=='Q'||RuSure=='q'){
            again='n';
        }
        else{
            again="y";
        }
    } while(again=="y"||again=="Y");
            }//2 AI
            
            case'3':{
                   //loop the program as many times as the user wishes
    do{
        //at the start of each round increase the round number
        rounds++;
        
        //roll the dice
        die=roll_the_dice();
        srand(time(NULL));
        ai1=roll_the_dice();
        ai2=roll_the_dice();
        ai3=roll_the_dice();
        
        //let the player know what numbers they rolled
        display_roll(die);
        
        //display the AI numbers
        display_AI(ai1,1);
        display_AI(ai2,2);
        display_AI(ai3,3);
        
        //check to see if die matches round number
        points=get_points(die,rounds);
        ai1p=get_points(ai1,rounds);
        ai2p=get_points(ai2,rounds);
        ai3p=get_points(ai3,rounds);
        
        //at the end of the game add 1 to the number of games played
        gplayed++;
        //display the results to the user
        display_results(points,gplayed,rounds);
        
        //display AIs points
        aiPoints(ai1p,1);
        aiPoints(ai2p,2);
        aiPoints(ai3p,3);
        
        //open the save file
        save.open("Save_Data.txt");
        //output the data to the save file
        write_to_file(save,points,gplayed);
        
        //ask the user if they would like to re run the program
        cout<<"Do you wish to play again(y/n)"<<endl;
        getline(cin,again);
        cin.ignore();
        //confirm that the user intended to quit
        if(again!="y"||again!="Y"){
            cout<<"Are you sure you want to quit?"<<endl;
            cout<<"If so type 'Q' or 'q' to quit"<<endl;
            cin>>RuSure;
        }
        //end the program if the user enters required characters
        if(RuSure=='Q'||RuSure=='q'){
            again='n';
        }
        else{
            again="y";
        }
    } while(again=="y"||again=="Y");
            }//3 AI
            
        }//end of switch statement
    
    }
    return 0;
}