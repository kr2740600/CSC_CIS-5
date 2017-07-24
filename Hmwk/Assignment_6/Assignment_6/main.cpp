#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>

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

//function for problem 5
string delete_repeats(char array[],int asize);
string delete_repeats(char array[],int asize){
    int i,j;
    for(i=0;i<asize;++i){
        for(j=0;j<asize;++j){
            if(j!=i){
                if (array[j]==array[i]){
                array[j]=' ';
                }
            }
        }
    }
    return array;
}

void display_5(char array[],int asize);
void display_5(char array[],int asize){
    int i;
    for(i=0;i<asize;++i){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void display_sarray(string array[], int size);
void display_sarray(string array[],int size){
    int i;
    for (i=0;i<size;++i){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
//problem 6 functions
float get_average(float array[], int size);
float get_average(float array[],int size){
    float sum,avg;
    for(int i=0;i<size;++i){
        sum+=array[i];
    }
    avg=sum/size;
    return avg;
}

float get_sd(float ar[],int size, float avg);
float get_sd(float ar[],int size, float avg){
    float sd;
    for(int i=0;i<size;++i){
        sd+=(pow((ar[i]-avg),2))/size;
    }
    return sd;
}
//problem 7 functions


int main(int argc, char** argv) {
    //declare variable for loop
    char choice;
    
    do{
        cout<<"Type 1 for problem 1 from Savitch's Array Chapter Practice Program"<<endl;
        cout<<"Type 2 for problem 2 from Savitch's Array Chapter Practice Program"<<endl;
        cout<<"Type 3 for problem 3 from Savitch's Array Chapter Practice Program"<<endl;
        cout<<"Type 4 for problem 4 from Savitch's Array Chapter Practice Program"<<endl;
        cout<<"Type 5 for problem 3 from Savitch's Array Chapter Programming Project"<<endl;
        cout<<"Type 6 for problem 4 from Savitch's Array Chapter Programming Project"<<endl;
        cout<<"Type 7 for problem"<<endl;
        cout<<"Type 8 for problem "<<endl;
        cout<<"Type 9 for problem "<<endl;
        cout<<"Type 'a' for problem "<<endl<<endl;
        
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
            case '5':{
                //problem 5
                //prog proj 3 savitch 9thEd num 3
                
                //declare variables
                char repeat[10];
                int size;
                string conv;
                int k;
                
                //initialize variables
                repeat[0]='a';
                repeat[1]='b';
                repeat[2]='a';
                repeat[3]='c';
                size=4;
                
                //display the original array
                display_5(repeat,size);
                //check to see if there are duplicates and delete them
                conv=delete_repeats(repeat,size);
                //display new array
                for(k=0;k<size;++k){
                    if(conv[k]!=' '){
                    cout<<conv[k]<<" ";
                    }
                }
                break;
            }//end of problem 5
            case '6':{
                //problem 6
                float average;
                float stand;
                float array6[15];
                int size;
                
                array6[0]=1;
                array6[1]=10;
                array6[2]=15;
                array6[3]=20;
                size=4;
                
                //compute average
                average=get_average(array6,size);
                cout<<"The average is: "<<average<<endl;
                //compute standard deviation
                stand=get_sd(array6,size,average);
                cout<<"The standard deviation is: "<<stand<<endl;
                break;
            }//end of problem 6
            case'7':{
                //problem 7
                //declare variables
                vector<int>nums;
                int fileo;
                int addnums;
                char rnum;
                string filename;
                int copies;
                
                //ask the user whether they want to use a file or enter nums themselves
                cout<<"Enter '1' to read in a file or '2' to enter numbers into the array"<<endl;
                cin>>fileo;
                if(fileo==1){
                    cout<<"What is the name of the file"<<endl;
                    getline(cin,filename);
                } else if(fileo==2){
                    do{
                    cout<<"Enter in a value"<<endl;
                    cin>>addnums;
                    nums.push_back(addnums);
                    cout<<"Do you want to add another number? y/n"<<endl;
                    cin>>rnum;
                    }while(rnum=='y');
                }
                //sort the numbers in descending order
                std::sort(nums.begin(),nums.end(),std::greater<int>());
                
                //print the numbers
                for(int i=0;i<nums.size();++i){
                    for(int j=0;j<nums.size();++j){
                        if(nums[i]==nums[j]){
                            copies++;
                            
                        }
                    }
                    cout<<nums[i]<<"  "<<copies<<endl;
                    copies=0;
                }
                break;
            }//end of problem 7
            case '8':{
                //problem 8
                
                break;
            }//end of problem 8
            case '9':{
                //problem 9
                
                break;
            }//end of problem 9
            case 'a':{
                //problem 10
                
                break;
            }//end of problem 10
            
        }//end of switch statement
        
    }while(choice>=1&&choice<=10);
    

    return 0;
}

