#include<iostream>
using namespace std;

int main(){
    //while-entry control loop
    //dowhile-exit control loop
    /*x=0               starrting
    while(x!=10){       condition
    take one step
    x=x+1               update*/
        int cliff_end=10;
        int x =0;
        while(x<cliff_end){
            x=x+1;
            cout<<"taking 1 step reaching "<<x<<endl;
        }
        cout<<"final X "<<x<<endl;
        if(x==cliff_end){
            cout<<"we are standing at the cliff"<<endl;
        }
        else if(x>cliff_end){
            cout<<"fall from the cliff";
        }
    ////////////if x=10 at starting than he will not walk and will not fall
    ////////////but in do whil lopp he would have died





    return 0;
}