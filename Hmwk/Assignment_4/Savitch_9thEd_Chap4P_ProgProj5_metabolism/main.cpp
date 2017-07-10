#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float get_bmr(float weight);
float get_bmr(float weight){
    float calRec;
    calRec=70*pow((weight/2.2),0.756);
    return calRec;
}

float get_calories(float weight, float intensity, float time );
float get_calories(float weight, float intensity, float time){
    float physical;
    physical=0.0385*intensity*weight*time;
    return physical;
}

float get_digestion(float calcon);
float get_digestion(float calcon){
    float efood;
    efood=calcon*.1;
    return efood;
}

float get_final(float favFood, float digestion, float phys, float bmr);
float get_final(float favFood, float digestion, float phys, float bmr){
    float finalcal;
    finalcal=bmr+phys+digestion;
    return finalcal;
}

float get_foods(float fcal, float food);
float get_foods(float fcal, float food){
    float numfood;
    numfood=fcal/food;
    return numfood;
}


int main(int argc, char** argv) {
    
    //define variables
    float bmr;
    float pcalor;
    float weight;
    float intense;
    float weigh;
    float phys;
    float mins;
    float cal;
    float foodcal;
    float daycal;
    float favfood;
    
    //get input from user
    cout<<"Enter in your current weight(in pounds)"<<endl;
    cin>>weigh;
    cout<<"Enter in the intensity of the workout"<<endl;
    cin>>intense;
    cout<<"Enter in the length of the workout(in minutes)"<<endl;
    cin>>mins;
    cout<<"Enter in an estimate of the number of calories in your favorite food"<<endl;
    cin>>cal;
    
    //get basal metabolic rate
    bmr=get_bmr(weigh);
    
    //get physical activity
    pcalor=get_calories(weigh,intense,mins);
    
    //get number of cals from eating
    foodcal=get_digestion(cal);
    
    //get total calories required for that day
    daycal=get_final(cal,foodcal,pcalor,bmr);
    
    //get favfood
    favfood=get_foods(daycal,cal);
    
    //output the values
    cout<<"Your Basal Metabolic Rate is: "<<bmr<<endl;
    cout<<"The number of calories you spend on your physical activity is: "<<pcalor<<endl;
    cout<<"The number of calories spent on digestion is: "<<foodcal<<endl;
    cout<<"The number of calories used daily is: "<<daycal<<endl;
    cout<<"You would have to consume "<<favfood<<" servings of your favorite food"<<endl;
    
    
    

    return 0;
}

