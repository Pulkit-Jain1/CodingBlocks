#include<iostream>
using namespace std;

int main(){
    //we will create 2d array and each row of array will denote one string
    /*
    example-->
    hello\0
    bat\0
    
    if we do cin>>a[i][j]
    it will take input a single charecter
    but if we do cin>>a[i]
    than it will take input ith row 
    we are taking about ith row
    way to initialize 
    char a[sspecific numbers of rows is always optional][10] = {{'a','b','c','\0'},{'d','e','f','\0'}} or {"abc","def".....}
    }*/
    char a[][10]={{'a','b','c','\0'},{'d','e','f','\0'}};//one way to write , it will have 2 rows

    char b[][10]={"abc","def","ghi","hello"};//2nd way// will have 4 rows from 0 to 3

    char c[10][10];//3rd way
    c[0][0]='A';

    cout<<a[0]<<endl;//for output of 0th row
    cout<<a[1]<<endl;//for output of 1st row

    cout<<b[2]<<endl;
    cout<<b[3]<<endl;

    cout<<c[0][0]<<endl;









    return 0;
}