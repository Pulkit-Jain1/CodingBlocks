/**
 * !address of operator
 * it finds or gives you a address of given variable
 * int x= 10
 * in memory we create a box of 4bytes which stores 10
 * it will have a starting adress eg 8080
 * when we do address of x &x cpp deisplays adress in hexadecimal format 
 * if it is abse 10 no. it will be covered to base 16
 * in hexadecimal system we have 16 unique no. 1,2,----9,A,B,----F
 */
#include<iostream>
using namespace std;

int main(){
    int x= 10;
    cout<<&x<<endl;

    float y =10.5;
    cout<<&y<<endl;

    //exceptoion-->it doesnot works for charecter vriables 
    char ch = 'a';
    cout<<&ch<<endl;   //it will print a only 
    //due to operator overloading
    //then how to print
    cout<<(void *)&ch<<endl;//this is calle explicit typecasting from char* to void*(we can also covert into int*)      
    //problem is not with &ch it is with <<&ch           

    return 0;
}