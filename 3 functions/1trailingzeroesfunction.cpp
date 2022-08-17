//! given a function N, write a function that returns count of trailing zeroes in n! and 1<=N<=10^9
    //we can directly do this but if the value of N is big enough problem happens
    // N=5 output
    //ans = 1
    // value of long long int is of the order 10^18 only so we cant use that also as we can only store 18 digits in that
    // there is time limit also
    /**
     * ? alter approach--------->
     * for 10! we know that two zeroes will occur from 10 and 5*2 , we are looking for factors of 10
     * we also know occ of 2 >>> occ of 5 , so we only have to find occuraces of 5 in prime factorisation of our number
     * formula for that is we have studied in JEE
     * [N/5]+[N/5]^2...........where [] is gif so till zero comes we apply this formula 
     * sor 10 [10/5] + [10/5^2] =2 
     * so 10! will have 2 zeroes
     * for 100!
     * [100/5]+[100/5^2]+[100/5^3] =24
     * so 24 zeroes is our answer
     * all remaining zeroes doesnot contibute to make 10 
     */
#include<iostream>
using namespace std;
int findzeroes(int n){
    int ans=0;
    for (int i=5 ; n/i>0 ; i = i * 5){
        ans += n / i;
        
    }
    return ans ;
}
int main(){
    long long int n;
    cin>>n;

    cout<<findzeroes(n)<<endl;
    return 0;
}