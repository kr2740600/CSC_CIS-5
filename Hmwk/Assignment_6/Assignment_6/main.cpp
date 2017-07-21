#include <iostream>
#include <cstdlib>

using namespace std;

//function for problem 1
bool firstLast2(int ar[],int length);
bool firstLast2(int ar[], int length){
    for(int i=0;i<length;++i){
        if(ar[0]==2||ar[length]==2){
            return true;
        }else{
            return false;
        }
    }
}
int main(int argc, char** argv) {
    //declare variable for loop
    char choice;
    
    do{
        cout<<"Type 1 for problem 1 from Savitch Array Chapter Practice Program 1"<<endl;
        
        //get user choice
        cin>>choice;
        
        //use switch for problems
        switch(choice){
            case'1':{
                //declare variables
                int myAr[]={2,3,4,5,7};
                int leng;
                bool tf;
                
                //initialize variables
                leng=5;
                
                //check array
                tf=firstLast2(myAr,leng);
                //output results
                if(tf==true){
                    cout<<"There was a 2 at the beginning or end of the array"<<endl;
                }else{
                    cout<<"There was not a 2 at the beginning or end of the array"<<endl;
                }
                
            }
            
            //end of switch
        }
        
    }while(choice>=1&&choice<=10);
    

    return 0;
}

