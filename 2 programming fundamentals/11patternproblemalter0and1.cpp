/*
pattern problem 
N=7
- for ith line you print i numbers
-odd lines start with 0 and values alternated between 0 and 1
-even lines start with 1 and --------------------------------
-print n lines
0
10
010
1010
01010
101010
0101010
*/
#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;//total rows
    for(int i= 1;i<=n;i++){
        if(i%2==0){
            for(int l = 1;l<=(i/2);l++){
                cout<<1;
                cout<<0;
            }    
        }
        else{
            for(int l = 1;l<=(i/2);l++){
                cout<<0;
                cout<<1;
            }
            cout<<0;
        }
    cout<<endl;
    }

    return 0;
}