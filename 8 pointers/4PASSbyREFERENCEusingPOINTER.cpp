//!               MAIN USE OF POINTERS         !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include<iostream>
using namespace std;

//why this happen(10 in main)------>
//because of pass by value concept
void increment(int /*  *  */a ){
    a=a+1;/*we will write *a instead of a*/
    cout<<"inside function"<</* * */a<<endl;
    
}
/*what happens is in main we have a bucket a when we pass it to void another bucket copy of prev a 
is formedd also a and all the changes are made to second copy not the first copy BUT
when we exit from function this memory is destroyed*/

int main(){
    int a = 10;
    increment(/*  &  */a);
    cout<<"inside main "<<a;//! answer is 10 OMG!!!!!!!!!



    //!our main topic starts from here that is "passby by reference using pointers"
    // idea is to not create a copy of a 
    // just want to get address of a 
    //to fix our problem of 10 write new code by removing comments from rewpective places in above code

    //? how problem is solved here ?
    //? we are passing pointer directly and we are changing original bucket instead of copy of bukcet that we were doing previopusly

    return 0;
}
//! earlier we were pasing copy of variable now we are passing exact address of variable
//! using dereferencing operator we were able to update that variable from different function