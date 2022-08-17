#include<iostream>
using namespace std;
// and = && in C++
int main(){
    //program to check if a number is divisible by 2 , dividible by 3 and both
int n;
cin>>n;
    if(n%2==0&&n%3==0){
        cout<<"n is divisible by 2 and 3 both";
    }
    else if(n%2==0&&n%3!=0){
        cout<<"n is divisible by 2";}
    else if (n%2!=0&&n%3==0){
        cout<<"n is divisble by 3";
    }
    else{cout<<"not divisible by 2 and 3 both";}
    return 0;
    /*if we use 
    1st if
    2nd if
    3rd else (then this else is independent of 1st if )(and will get executed if 2nd if is not satisified 
    independent of 1st if )*/
  
}