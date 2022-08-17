#include<iostream>
using namespace std;
//farhenhite to celcius and print t table that is given in question
// i have done this quuestion so my ouput is the value of the table that is given in the question
int main(){
    int f,c;
    f=0;
    while(f<=300){
     c=(5*(f-32))/9;// we dont ahev to do (5/9) as 5/9 is zero as both 5 and 9 are integers
     cout<<f<<"  "<<c<<endl;
     f=f+20;
    }
   
    return 0;
}