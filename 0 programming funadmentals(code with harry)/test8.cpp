#include<iostream>
#include<iomanip>//for using setw
using namespace std;
int main(){
    //constants in C++
    const int e = 3;
    //{a=45;}//now it will not change its value error will show
//manipulators in C++
// operators which help is data display format for eg endl and setw
int a =3 ,b =78 ,c=1233;
cout<<setw(4)<<a<<endl;// all no. will print with right justified format and will use space of 4 charecteers
cout<<setw(4)<<b<<endl;
cout<<setw(4)<<c<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;

//operator precedence
int x=3;
int y=4;
int z = (x*5)+y;//(we will use C++ operator precedence table to see which operator will work first)(which comes above will be done first)
//if precedences of two operators are same we will use associativity in same table,we can use boadmass for intuitively not exactly) 
cout<<z;
}