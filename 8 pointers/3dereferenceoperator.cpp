//very coomon use is of multiple it acts as binary operator
//another is to declare pointer
//3rd use case is to dereference any address
//by dereferencing we can access the varible where pointer is pointing
/*
* performs reverse of & 
int x= 10(adress 2054 its next adresss 2058)
int* xpter = &x
cout<<*(&x) -------> we will get x only
cout<<*xptr--------> we will get x only
cout<<*xptr + 1//will give 11
cout<<*(xpter+1) //will gives next address  i.e   2058 adreess in hexadecimal format 
we can say we will get GARBAGE  */
#include<iostream>
using namespace std;

int main(){
    int x =10;
    cout<<&x<<endl;
    int* xptr = &x;
    cout<<xptr<<endl;

    cout<<*(&x)<<endl;
    cout<<*xptr<<endl;

    cout<<*(&xptr)<<endl;//xptr
    cout<<&(*xptr)<<endl;//xptr

    cout<<&xptr<<endl;//address of pointer

    int** xxptr = &xptr;//pointer for a pointer //int* is the datattype to which it points and another * as dereference operator(for syntax)
    cout<<xxptr;
    //!this is called DOUBLE POINTER
    return 0;
}