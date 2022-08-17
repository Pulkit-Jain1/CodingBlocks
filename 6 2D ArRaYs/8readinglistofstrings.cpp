#include<iostream>
using namespace std;

int main(){
    
    char a[50][50];

    //read a lsit of string and will store in a 2d charecter array
    int n;
    cin>>n;

    cin.get();//to consume extra enter
    for(int i = 0 ; i<n ; i++){
        cin.getline(a[i],1000);//delimiter is \n which is by default
    }

    //print out all the strings
    for(int i = 0;i<n;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}