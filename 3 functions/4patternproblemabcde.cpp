//print the following pattern for given N
/*
ABCDE
ABCD
ABC
AB
A
*/
#include<iostream>
using namespace std;

void printABCDPattern(int n/*we can leave this bracket empty and take input of n inside this void function than in intmain function we can just call this function with empty bracket()*/){    
    for(int row=1;row<=n;row++){
        char charr='A';//we cant declare it inside next for loop "1st line" as char=char+1 becomes b but after doing a loop in first lie it again becomes a
        for(int column=1;column<=(n-row+1);column++){
            //1st line
            cout<<charr;
            charr = charr+1;
        }
    cout<<endl;
    }

}
int main(){//!main function serves as the starting point for programme execution , it controls programme execution by directing calls to other functions
    int n;
    cin>>n;//it is general practice that we take input and output in main and write logic in function
    printABCDPattern(n);//call of a function is after we know the value of n
    return 0;
}
