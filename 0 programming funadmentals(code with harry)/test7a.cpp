//reference variabe
#include<iostream>
using namespace std;
int main(){
    float x= 455;
    float & y = x; //now y is pointing x, y is now a reference variable
    cout<<x<<endl;
    cout<<y<<endl;
//typecasting - converting one type into another data type
int a = 45;
float b=45.56;
cout<<a;
cout<<(float)a;
cout<<float(a)<<endl;//both are different ways to represent same thing
cout<<(int)b<<endl;
int c = int(b); //this become valid instruction because we convertef float b into integer c by typecasting
cout<<a +b<<endl;
cout<<a +int(b)<<endl;
cout<<a +(int)b<<endl;
cout<<c;
}