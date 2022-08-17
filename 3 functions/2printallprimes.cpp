#include<iostream>
using namespace std;
bool isprime(int n){// this whole code is copy and pasted from 2 programming fundamental file where we checked if a number is prime or not
    int i;
    i=2;
        while(i<n){
        if(n%i==0){
           return false;//terminate this function at this point make control flow back to main
            break;
        }
        i++;
        
    }
    //rememr this check is important
    return true; //as we come here only if above return statement didnt have worked

}
void printprimes(int n){
    
    
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    printprimes(n);
    return 0;
}//!     how flow of code now looks like ------->we have a function main calling to print primes which calls  is prime everytime to check
//!      if a number is prime or not 