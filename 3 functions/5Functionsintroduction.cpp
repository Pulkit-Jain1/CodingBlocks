//so far we were writing whole code in single function called main
/**
 * functions allows you to break code into smaller modules 
 * which help in reusability,readability,better organised
 * it is like deviding a book into chapters
 * 
 */
#include<iostream>
using namespace std;

void/*return type */ sayhello(/*no input as it is simple hello world this thing in bracket is called argument*/){
    cout<<"hello world";//this is body of function
    // void return type means we are not returning anything
}






int factorial(int n){//!we can have more than 1 areguments 
    int ans =1;
    for(int i=2;i<=n;i++){
        ans=ans*i;
    } 
    
    return ans;// we can do two thing either we can print the answer in this function or we can take output from it to main here we are returning our ans to main
//or we can do cout<<n;
//             return 0;//return 0 will only terminate this function and remaining main function will get executed
// and only call function instead of couting   
}







int main(){//execution starts from main function
   cout<<"before function"<<endl;//we execute this first
    sayhello();//this is called a call to a function / or invocation a function now our control flow will move to say hello function
    cout<<endl<<"after function"<<endl;//we execute this after say hello function
    //our main function  is int and we return 0 always 0 , 0 is generally a measure of success of a function , we write 0 to say that our programme has terminated successfully
    //0 is stated as marker for successfull execution of the main function , it is  GENERAL STANDARD

    int n;
    cin>>n;
    cout<<factorial(n);
    
    return 0;
}



/**
 * !there are 2 processes that work simultaneously 
 * compilation--> compilation starts from line number 1 
 * execution----> it starts from main and goes till end of main function and if there are some functions call between them our flow diverts to those functions
 * and ends with end of main function
 * todo --- main is like a  boss that calls for helpers called functions , one function can also can also call other function   
 * 
 */