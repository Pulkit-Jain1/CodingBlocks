#include<iostream>
using namespace std;

int main(){
    int n;//take input
    cin>>n;
    int i = 1;
    int sum = 0;//initial conditions
    while(i<=n){//stopping criteria
        sum = i+sum;
        i=i+1;//update statement
    }
    cout<<sum;//output the sum
    return 0;
}