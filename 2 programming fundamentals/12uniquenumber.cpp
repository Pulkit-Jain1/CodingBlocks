/*problem - unique number 2N+1
given a list of numbers where every numbers occurs twice except one , find that unique number
for example 3,2,3,5,6,5,2 here unique nukmber is 6
we can use array to do this question or we can use another method which is more effective that is
bitwise operator
using properaty a^a =0
a^b^a=b
a^b^c^a^c=b
and a^b^c^c=*/
//!XOR OPERATOR QUESTION
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int number, xorr;
    xorr=0;
    for(int i=1;i<=n;i++){
        cin>>number;
        xorr=xorr^number;
    }
    cout<<"our uniques number is "<<xorr; 
   

    return 0;
}