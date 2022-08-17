#include<iostream>
using namespace std;
int main(){
    // we can do all the things thaat we do which do while which we can do with
    //the while loop
    int cliff_end=10;
        int x =0;//starting point
        do{
        x=x+1;
            cout<<"taking 1 step reaching "<<x<<endl;
        }while(x<cliff_end);
        cout<<"final X "<<x<<endl;
        if(x==cliff_end){
            cout<<"we are standing at the cliff"<<endl;
        }
        else if(x>cliff_end){
            cout<<"fall from the cliff";
        }
    return 0;
    /////////////////////if initial value is x=10 then he will fall from cliff
    /////////////////////irrespective of condition met or not do while loop will 
    /////////////////////execute at least once!!!!!!!!!!!



    //exit controlled does not check for the initial condition is truwe or false
}