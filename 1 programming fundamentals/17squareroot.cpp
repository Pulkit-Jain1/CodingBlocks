#include<iostream>
using namespace std;
//Brut FORCE method 
// first we will increment by 1 to get closest small integer to square root 
// than we will increment that integre by 0.1 than by 0.01 than by 0.001 ans so on
int main(){
    int a;
    int p;//precision
    cin>>a;//no. whose square is to be found
    cin>>p;
    float i=0;
    float increment = 1.0;
    int times=0;
    while(times<=p){
    while(i*i<=a){
        i = i+increment;
    }
    i=i-increment;
    increment=increment/10;
    times++;}
    cout<<i;
    return 0;
}