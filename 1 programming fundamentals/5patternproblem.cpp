//for every odd no. row print 1 ,odd number of times 
//for every even number row , print first and last
//charecters as 1 and restof middle charecters as 0
// 1
// 11
// 111
// 1001
// 11111
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        if(row%2 != 0){
            int column=1;
            while(column<=row)
                {cout<<1;
                ++column;}

        }
        else{ int column = 1;
            cout<<1;
            while(column<=row-2){
                cout<<0;
                ++column;
            }
            cout<<1;
        }
        cout<<endl;
    ++row; 
    }
    
    return 0;
}