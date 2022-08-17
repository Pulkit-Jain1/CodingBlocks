#include<iostream>
using namespace std;

int main(){
        //what is a pointer?----> data type which holds the address od data types
    int a=3 ;
    int* b = &a ; //&is a address of operator , *is a dereference operator
    cout<<"the address of a is "<<b<<endl;
    cout<<"another method to erite address of a is "<<&a<<endl;
     // value at (dereferance operator)
     cout<<"the value at adress b is "<<*b<<endl;
     //pointer to pointer
     int** c = &b;
     cout<<"the value of b is"<<&b<<endl;
     cout<<"the value of b is"<<c<<endl;
     cout<<"the value of b is"<<*c<<endl;
cout<<"the value of b is"<<**c<<endl  ;
    return 0;
}
