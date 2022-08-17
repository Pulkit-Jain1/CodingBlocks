#include<iostream>
#include<cstring>
using namespace std;
//read a string/ paragraph and check if its palindrome eg abba,abcba or not
bool ispalindrom(char a[]){
    int i = 0;
    int j = /*(sizeof(a)/sizeof(char))*/ strlen(a) - 1;

    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    

    char a[1000];
    cin.getline(a,1000);

    if(ispalindrom(a)){
        cout<<"palindromic string";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}