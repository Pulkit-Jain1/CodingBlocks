#include<iostream>
using namespace std;
/*how is it working??
first we are extracting each digit as done in 4th problem of this folder
than simultaneously multiplying it with2^n pattern or we can say simple geometric progression of
1,2,3,4,8 and so on */
int main(){
    int binary; 
    cout<<"enter your binary number \n";
     cin>>binary;
     int sum=0;
     int n=1;
     while(binary>0){
         sum=sum+(binary%10)*n;
         binary = binary/10;
         n=n*2;
     }
     cout<<"your decimal number is "<<sum;


    return 0;
}