#include<iostream>
using namespace std;

int main(){
    int p,r,t;//declare a variable
    //assign values to the buckets (storage in the memory)
    //every statement shoul be terminated with;
    cin>>p>>r>>t;
    float si = p*r*t/100.0;
    //we were expecting answer as 2.5 but answer is 2 as p,r,t,100 is integer 
    //(if we use 100)
    //but according to C++ 
    //integer/integer=integer
    // float/integer = float
    //integer/float = float
    //this is called implicit typecasting as it happens on its own automatically the above three example are of
    //implicit typecatsting
    // solution is to put 100.0 instead of 100
    cout<<si<<endl;
    return 0;
}