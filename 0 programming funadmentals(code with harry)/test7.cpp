// c ++ reference varibale and typecasting
#include<iostream>
using namespace std;
int c = 45;
int main(){
    int a,b,c;
    
    cout<<"enter value of a:"<<endl;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"our sum is:"<<c<<endl;
    cout<<"our global varibale is:"<<::c<<endl;
    // to take value of global varibale in our function  we use scope resolution variable
    // which is ::
float d = 34.4f;//by default decimals are considered as double so we will put f/F to signify its floating value
long double e = 34.4l;//to signify its long double we will use l/L (this is used in function overloading concept)
cout<<"size of 34.4 is"<<sizeof(34.4)<<endl;//by default double
cout<<"size of 34.4f is"<<sizeof(34.4f)<<endl;
cout<<"size of 34.4F is"<<sizeof(34.4F)<<endl;
cout<<"size of 34.4l is"<<sizeof(34.4l)<<endl;
cout<<"size of 34.4L is"<<sizeof(34.4L)<<endl;
cout<<"the value of d is"<<d<<endl<<"the value of e is "<<e; 
// no problem in chaining of cout function and it run smoothly no problem at all


}