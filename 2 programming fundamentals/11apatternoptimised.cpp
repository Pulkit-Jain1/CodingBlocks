//todo see apatternproblemalter0and1.cpp before this 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int value = i%2==0?1:0;
        for(int count=1;count<=i;count++){
            cout<<value;
            value=1-value;//!for switching between 1,0,1,0   VERY IMPOATANT 
        }
        cout<<endl;
    }

    return 0;
}