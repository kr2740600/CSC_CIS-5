#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//function for problem 1
bool firstLast2(int ar[],int length);
bool firstLast2(int ar[], int length){
    for(int i=0;i<length;++i){
        if(ar[0]==2||ar[length]==2){
            //if the first or last value is 2 return true
            return true;
        }else{
            return false;
        }
    }
}

//create function for problem 2
int countNum2s(int arr[], int length);
int countNum2s(int arr[],int length){
    //use counter to count the number of 2s
    int counter=0;
    for(int i=0;i<length;++i){
        //check to see if the value in the array is 2
        if(arr[i]==2){
            //if array  value=2 then add 1 to counter
            counter+=1;
        }
    }
    return counter;
}

//function for problem 3
void swapFrontBack(int array[],int length);
void swapFrontBack(int array[],int length){
    
    int temp;
    temp=array[0];
    array[0]=array[length-1];
    array[length-1]=temp;
    cout<<"The array after swapping the values"<<endl;
    cout<<"{";
    for(int i=0;i<length;++i){
        cout<<array[i]<<",";
    }
    cout<<"}"<<endl;
}
//create a function to display arrays
void display_array(int array[],int length);
void display_array(int array[],int length){
    cout<<"The array: {";
    for(int i=0;i<length;++i){
        cout<<array[i]<<",";
    }
    cout<<"}"<<endl<<endl;
}

//function for problem 4
string lookupName(string tName, string names[], string phones[],int num);
string lookupName(string tName, string names[], string phones[],int num){
    
    string phonum;
    for(int i=0;i<num;++i){
        if(names[i]==tName){
            
            phonum=phones[i];
        }
    }
    return phonum;
}

int main(int argc, char** argv) {
    //declare variable for loop
    char choice;
    
    do{
        cout<<"Type 1 for problem 1 from Savitch's Array Chapter Practice Program 1"<<endl;
        cout<<"Type 2 for problem 2 from Savitch's Array Chapter Practice Program 2"<<endl;
        cout<<"Type 3 for problem 3 from Savitch's Array Chapter Practice Program 3"<<endl;
        cout<<"Type 4 for problem 4 from Savitch's Array Chapter Practice Program 4"<<endl;
        
        
        //get user choice
        cin>>choice;
        
        //use switch for problems
        switch(choice){
            case'1':{
                //problem 1
                //declare variables
                int myAr[20];
                int leng;
                bool tf;
                
                //ask user how long they wish the array to be
                cout<<"Enter the number of elements in the array(up to 20)"<<endl;
                cin>>leng;
                while(leng<0||leng>20){
                    cout<<"Enter a valid number(1-20)"<<endl;
                    cin>>leng;
                }
                //have user enter the numbers into the array
                for(int j=0;j<leng;++j){
                    cout<<"Enter the value for the array"<<endl;
                    cin>>myAr[j];
                }
                
                
                //check array
                tf=firstLast2(myAr,leng);
                //output results
                if(tf==true){
                    cout<<"There was a 2 at the beginning or end of the array"<<endl;
                }else{
                    cout<<"There was not a 2 at the beginning or end of the array"<<endl;
                }
                display_array(myAr,leng);
                break;
            }//end of problem 1
            case'2':{
                //problem 2
                //declare variables
                int ar2[20];
                int leg;
                int num2s;
                //get the array length
                cout<<"Enter in the number of elements in the array(up to 20):"<<endl;
                cin>>leg;
                while(leg<0||leg>20){
                    cout<<"Please enter in a valid number"<<endl;
                    cin>>leg;
                }
                //insert numbers into array
                for(int i=0;i<leg;++i){
                    cout<<"Enter the value into the array"<<endl;
                    cin>>ar2[i];
                }
                //get the number of 2s
                num2s=countNum2s(ar2,leg);
                //print the number of 2s
                cout<<"The number of 2's in the array: "<<num2s<<endl;
                //display array
                display_array(ar2,leg);
                break;
            }//end of problem 2
            case'3':{
                //problem 3
                //declare variables
                int array3[20];
                int nums;
                
                //get array length
                cout<<"Enter in the number of elements in the array"<<endl;
                cin>>nums;
                
                //insert numbers into the array
                for(int i=0; i<nums;++i){
                    cout<<"Enter the value into the array"<<endl;
                    cin>>array3[i];
                }
                //display original array
                display_array(array3,nums);
                
                //display new array
                swapFrontBack(array3,nums);
                break;
            }//end of problem 3
            case'4':{
                //problem 4
                string names[]={"Michael Myers","Ash Williams","Jack Torrance"
                        ,"Freddy Krueger"};
                string phoneNumbers[]={"333-8000","333-2323","333-6150","339-7970"};
                string targetName,targetPhone;
                char c;
                do{
                    cout<<"Enter a name to find the corresponding phone number."<<endl;
                    cin.ignore();
                    getline(cin,targetName);
                    targetPhone=lookupName(targetName,names,phoneNumbers,4);
                    if(targetPhone.length()>0){
                        cout<<"The number is: "<<targetPhone<<endl;
                    }else{
                        cout<<"Name not found."<<endl;
                    }
                    cout<<"Look up another name?(y/n)"<<endl;
                    cin>>c;
                    cin.ignore();
                }while(c=='y');
                    break;
            }//end of problem 4
            
        }//end of switch statement
        
    }while(choice>=1&&choice<=10);
    

    return 0;
}

