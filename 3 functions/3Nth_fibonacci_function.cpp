//?   what is a fibonacci series??
//?   0,1,1,2,3,5,8,13 .......
// find nth fibonacci number
#include<iostream>
using namespace std;
int fibonacci(int n){
    int c;
    int a = 0;
    int b = 1;
    for(int i = 1 ; i<=(n-2) ; i++ ){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    
    return 0;
}