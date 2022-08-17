//only way to take input in main from another function without using pointers is using cout directly

#include<iostream>
using namespace std;


int increment(int a ){
    a=a+1;
    cout<<"inside function"<<a<<endl;
    return a;
    
}

int main(){
    int a = 10;
    cout<<increment(a)<<endl;
    cout<<"inside main "<<a;


    

    return 0;
}
