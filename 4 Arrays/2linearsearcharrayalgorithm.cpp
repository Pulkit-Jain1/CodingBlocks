#include<iostream>
using namespace std;

int main(){
    //linear search 
    // a particular element in the array
    // if a particular element is present and where is it present???


    //here key is the element which is to be found
    int n,key ;
    cin>>n;//no.of elementws users want in array but we will create array of constant size given in question
//! variable and an array cant have same name
    int a[1000];//*todo i think we can use n instead of 1000 but i am not so sure ,code is working

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cin>>key;//enter the key that you wants
    int i;
    for(i=0;i<n;i++){
        
        if(a[i]==key){
            cout<<"found your key "<<key<<" at index "<<(i);
            break;
        }
    }
    if(i==n){
        cout<<"your key doesnot exist";
    }
    return 0;
}