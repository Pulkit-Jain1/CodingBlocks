#include<iostream>
using namespace std;
//read a sentence/ paragraph and store it

void readline(char a[], int maxlen ,char delim='\n'){
    int i=0;
    char ch =cin.get();
    while(ch!=delim){
        a[i]=ch;
        i++;
        if(i==(maxlen-1)){
            break;
        }
        ch=cin.get();
    }
    //once you come out of the loop
    a[i]='\0';
    
}

int main(){
    char a[1000];
    ////cin>>a;
    //cin does not process spaces and new lines
    // so we will use cin.get() but it reads a single cgharacter so we have to put 
    //a loop to read characters till you get a new line character \n thats why we created void readlien e
    ////readline(a,1000,'$');
    //!this function is already built in in c++ so, we will use it
    cin.getline(a,1000,'$');//work exactlt like read line method
    //if we don dpecify $ here by default it take it as \n , it accepts three arguments
    cout<<a<<endl;
    return 0;
}