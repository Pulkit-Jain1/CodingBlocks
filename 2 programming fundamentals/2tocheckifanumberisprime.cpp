#include<iostream>
using namespace std;
//check if a given number is prime
//very very impoiratnt concept
//real use of break condition
int main(){
    int i,n;
    i=2;
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"this no. is not prime and divisible by "<<i;
            break;
        }
        i++;
        
    }
    //rememr this check is important
    if(i==n){
        cout<<" this is prime number ";
    }
    
    
    return 0;
}