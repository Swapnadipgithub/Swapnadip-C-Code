#include<iostream>
using namespace std;

//HOLD
void printArray(){

}

int main(){
    //declare
    int number[15];
    //Accessing an array
    cout<<"Value at 0 position:"<<number[0]<<endl;
    cout<<"Value at 14 position:"<<number[14]<<endl;

    //declare
    int second[3]={3, 5, 8};
    //Accessing an array
    cout<<"Value at 2 index:"<<second[2]<<endl;

    //declare
    int third[15]={2,7};
    int n=15;
    cout<<"Printing the array"<<endl;
    for(int i = 0;i<n; i++){
        cout<<third[i]<<endl;
    }

    //declare
    int fourth[10]= {0};
    n =10;
    cout<<"Printing the array"<<endl;
    for(int i=0; i<n; i++)
    {
       cout<<fourth[i]<<" ";
    }

    //declare
    int fifth[10]= {1};
    n =10;
    cout<<"Printing the array"<<endl;
    for(int i=0; i<n; i++)
    {
       cout<<fifth[i]<<" ";
    }
    
    

    cout<<endl<<"Everything is Fine"<<endl<<endl;
    return 0;
}
