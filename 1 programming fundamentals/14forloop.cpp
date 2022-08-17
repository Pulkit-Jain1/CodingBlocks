#include<iostream>
using namespace std;

int main(){
    //work exactly like while loop
    //have more consise syntax
    //for loop=while loop entery controlled loop
    //anything that you can write using while loop can also be writtern as for loop
    //syntax  for(initial;stop;update){}
    int cliff_end=10;
    for(int x=0;x<cliff_end;x=x+1){
        cout<<"taking 1 step reaching "<<x+1<<endl; //to take exact same output as while loop use x+1 instead of x
    }//update happens after loop comnpleted
    /////alterrrr
    for(int x=0;x<cliff_end;){
        x=x+1;
        cout<<"taking 1 step reaching "<<x<<endl;//now it is exact copy of while loop
    }
    return 0;
}/////////////how it works 
//////////////first initial condition goes into curly bracket
//////////////than after it update happens 