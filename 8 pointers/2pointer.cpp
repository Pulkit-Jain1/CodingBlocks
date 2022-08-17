//most powerfull and confusing concept
//pointer variable is a varibale that stores address of another variable
/*
int x = 10(adress 8080)
int* ptr = &x(8080)
for pointer -->
datatype*variable name<----         syntax of pointer 
int* y = &x//declare + initialisation
or
int* y;//declaration
y=&x//initialistaion

another example
float a = 10.5
float* aptr(variable name --> pointer to a) = &a//space between datatype and star doesnot matter
if we dont initialise a pointer it will have garbage value
if we are not initialisattion a pointer than we can make it equal to zero so that it
stores zero value as garbage

we should never store adress of diffrent type in pointer
int a 
char* ptr = &a
we should not do this kind of things(reason later)

?     size of a pointer variable ---------->

    int a = 10(4 bytes) , char b = A (1 byte)
    int* aptr  ,  char* bptr
    size oh these will be sam !!!!!!
    it will be either 4 byte or 8 byte depending on system (windows,max,linux etc)
    suppose a has address 8080 and b has 8090
    both are cells in memory and all cells are equivalent , both will ocuupy same space 
    for 64 bit system address ranges from 0 to 2^64 (in decimal no. system) we need 64 bits to store this i.e 8 bytes
    all datatype pointers will have need space
    address is always of 1st cell in memory ( we already knows that 1 cell is of 1 byte)

    exaple there are many houses is same colony some big some small all have numberplates(address plates )
    all address plates will occupe saem space on wall

    now why we shoul not store address of differnt type in pointer
    this concept is called dereferencing
    suppose using 
    suppose we sotre int pointer in char than we dereference it , it will only read one box

*/


#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int y =20;
    int *xptr;
    xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    //re-assign another address to the variable;
    xptr = &y;
    cout<<xptr<<endl;
    cout<<sizeof(xptr);
    return 0;
}