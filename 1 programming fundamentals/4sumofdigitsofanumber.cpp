#include<iostream>
using namespace std;

int main(){
    //to extract digits of a number we can use modulo operator which gives remainder
    //for example to exract last digit of anumber we can take its mode with 10
    // 15322modulo10--->2
    //now to extarct last second digit we can devide  15322 by 10 and as variable is integer
    //which is storing it then last digit will be gone than we can use modulo function again
    int a;
    cin>>a;
    int sum=0;//initialisation
     while(a>0){//stopping criteria
    sum= sum+a%10;
    a=a/10;//update condition
     }
     cout<<"sum of digits is "<<sum;//print the answer

    
  
    return 0;
}