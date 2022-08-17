#include<iostream>
using namespace std;

int main(){
    //you are given N,followed by list of N numbers
    //output : the squares of N numbers
    // input file
    /*
    1
    2
    5
    output file
    1
    4
    25*/
    //online judges like hacker blocks only compare output withut seeing our input
    //so thatswhy instead of producing whole output once we can do it line by line
    int n;
    cin>>n;
    int no;
    while(n>0)
    {cin>>no;
    cout<<no*no<<endl;
        n=n-1;
    }
    return 0;
}