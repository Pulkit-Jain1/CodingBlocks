#include<iostream>
using namespace std;

int main(){
    //comma operator
    int a,b,c;
    //assignment operator
    a=10;
    b=20;
    c=30;
    //logical operator;
    if(c>a and c>b){
        cout<<"c is largest"<<endl;
    }
    //ternary operator
    int x = c%2==0?1:0;
    cout<<x<<endl;
    c%2==0?cout<<"even":cout<<"odd";
    cout<<endl;
    //bitwise operator
    x = 5;
    int y = 7;
    cout<<"AND "<<(x&y)<<endl;
    cout<<"OR "<<(x|y)<<endl;
    cout<<"XOR "<<(x^y)<<endl;
    //shift operator
    x = x<<2;
    cout<< x <<endl; //20
    cout<<(y>>1)<<endl; //3(7/2)
    
    //unary operators
        //address of the bucket
        cout<<(&x)<<endl;
    //post increment and decrement operator
    a=10;
    int z = a++;
    cout<<z<<endl;
    z=++a;
    cout<<z<<endl;
        
    //compound assignment operator
    a= 10;
    a *= 3;//30
    cout<<a<<endl;
    a %=5;//0
    cout<<a<<endl;
    b=5;
    b<<=1;//10
    cout<<b;
    return 0;

}