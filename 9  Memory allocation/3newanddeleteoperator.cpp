#include<iostream>
using namespace std;

int main(){
    
    //arrays
    int b[100]={0};//we can do ={0} if we want to start with all element as zero
    cout<<sizeof(b)<<endl;//static allocation---> allocation + deallocation by the compiler
    cout<<b<<endl;//symbol table
    //here b cant be overwrittrn it is constant , b is part of read only memory

    //dynamic allocation
    int n;
    cin>>n;
    int* a = new int[n];
    cout<<sizeof(a)<<endl;//size of pointer
    //variable is created inside the static memory
    //can be overwrittern a[30]
    
    //no chnange here
    for(int i = 0 ; i<n ;i++){
        cin>>a[i];
        cout<<a[i]<< " ";
    }

    //to avoid memory leak
    delete []a;//here we dont have to do as after main function ends it will automatically be destroyed 
    return 0;
}