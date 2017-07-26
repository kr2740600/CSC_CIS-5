#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>


using namespace std;
//create object
class Player{
public:
    //
    int roll_the_dice();
    
private:
    //
        
};


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
int roll_the_dice();
int roll_the_dice(){
    int dice;
    dice=rand()%6+1;
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
void display_roll(int a, int b, int c, int d, int e, int f, int g, int h, int j);
void display_roll(int a, int b, int c, int d, int e, int f, int g, int h, int j){
    cout<<"Dice 1 rolled: "<<a<<endl;
    cout<<"Dice 2 rolled: "<<b<<endl;
    cout<<"Dice 3 rolled: "<<c<<endl;
    cout<<"Dice 4 rolled: "<<d<<endl;
    cout<<"Dice 5 rolled: "<<e<<endl;
    cout<<"Dice 6 rolled: "<<f<<endl;
    cout<<"Dice 7 rolled: "<<g<<endl;
    cout<<"Dice 8 rolled: "<<h<<endl;
    cout<<"Dice 9 rolled: "<<j<<endl<<endl;
}

//check to see if the dice number matches round number
bool get_match(int dice, int nround);
bool get_match(int dice, int nround){
    bool result;
    if(dice==nround){
        result=true;
    } else{
        result=false;
    }
    return result;
}

//if the die matches the round number give a point
int get_points(bool results);
int get_points(bool results){
    int point;
    if(results==true){
        point=1;
    }else{
        point=0;
    }
    return point;
}

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

int main(int argc, char** argv) {
    
    //declare variables
    int numPlay;//number of players
    int rounds;
    string again;
    int die1;
    int die2;
    int die3;
    int die4;
    int die5;
    int die6;
    int die7;
    int die8;
    int die9;
    int wins;
    int losses;
    int points;
    int gplayed;
    bool bdie;
    char RuSure;
    ofstream save;
    int start;
     
    //initialize variables
    points=0;
    rounds=0;
    
    //explain the rules but only once at the beginning of each game
    explain_rules();
    
    //ask the user if they wish to start
    cout<<"Enter '1' to start the program"<<endl;
    cin>>start;
    //start the program
    if(start==1){
    //loop the program as many times as the user wishes
    do{
        //at the start of each round increase the round number
        rounds++;
        
        //setup srand
        srand(time(NULL));
        
        //roll the dice
        die1=roll_the_dice();
        die2=roll_the_dice();
        die3=roll_the_dice();
        die4=roll_the_dice();
        die5=roll_the_dice();
        die6=roll_the_dice();
        die7=roll_the_dice();
        die8=roll_the_dice();
        die9=roll_the_dice();
        
        //let the player know what numbers they rolled
        display_roll(die1,die2,die3,die4,die5,die6,die7,die8,die9);
        
        //check to see if die matches round number
        //dice 1
        bdie=get_match(die1,rounds);
        points+=get_points(bdie);
        //dice 2
        bdie=get_match(die2,rounds);
        points+=get_points(bdie);
        //die 3
        bdie=get_match(die3,rounds);
        points+=get_points(bdie);
        //die 4
        bdie=get_match(die4,rounds);
        points+=get_points(bdie);
        //die 5
        bdie=get_match(die5,rounds);
        points+=get_points(bdie);
        //die 6
        bdie=get_match(die6,rounds);
        points+=get_points(bdie);
        //die 7
        bdie=get_match(die7,rounds);
        points+=get_points(bdie);
        //die 8
        bdie=get_match(die8,rounds);
       points+=get_points(bdie);
        //die 9
        bdie=get_match(die9,rounds);
        points+=get_points(bdie);
        
        //at the end of the game add 1 to the number of games played
        gplayed++;
        //display the results to the user
        display_results(points,gplayed,rounds);
        
        //open the save file
        save.open("Save_Data.txt");
        //output the data to the save file
        write_to_file(save,points,gplayed);
        
        //ask the user if they would like to re run the program
        cout<<"If you wish to play again enter in 'yes'"<<endl;
        cin>>again;
        //confirm that the user intended to quit
        if(again!="yes"||again!="Yes"){
            cout<<"Are you sure you want to quit?"<<endl;
            cout<<"If so type 'Q' or 'q' to quit"<<endl;
            cin>>RuSure;
        }
        //end the program if the user enters required characters
        if(RuSure=='Q'||RuSure=='q'){
            again='n';
        }
    } while(again=="yes"||again=="Yes");
    }
    return 0;
}