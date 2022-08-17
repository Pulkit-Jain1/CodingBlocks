/**ARRAYS
 * 
 * how to store 1000 numbers ?
 * this is where arrays come into pictures
 * arrays is collection of itmes stred in a continuous memory
 * array is an contaier which can hold multiple elements 
 * if we have to store 10 numbers we can make 10 variables but it is  difficult to handle them all
 * or we can make a array under only 1 variable name
 * each bucket in array has a paticular address 
 * index of starting number is 0 than 1 tha 2...........9(if we are creating an array of 10 elements)
 * 
 * !how to create an array??
 * 
 * array in cpp are homogeneous means they can only store one datatype 
 * first we have to define datatype than name of array than sixe in [] bracket
 * for eg -  int a[10]; when we create an array initially it contains garbage(random values) unless you update values
 * for eg -  int a[10]={5} than firt element of array will become 5 and rest zeroes(grbage is gone XD)
 * for eg -  int a[10]={1,2,3} than fiesrt 3 elements becomes 1,2,3 rest zeroes
 * how to update an array ---> if we want to updaete element of obove array to 13 from 3 ( whose index is 2)
 * we do a[2]=13; updating values of array 
 * cout<<a[2]; for printing it 
 * 
 * !how to iterate over the array ??(you want to print all elements or input all elements)
 * 
 * ith bucket(initial is 0 and end element is n-1)
 * than 
 * for(i=0;i<n;i++){
 * cin>>a[i]    this is how we take input  and if we want to take output use cout instead of cin
 * }
 *  
 * !size of array ??
 * 
 * if it is integer on 10 elements than  total size willl be 4 byte * 10 
 * we can also use sizeof(a) operator as we have used in variables
 */
#include<iostream>
using namespace std;

int main(){
    //initialization of an array
    int a[10];//={1,2,3} we can initialize our code to get rid of garbage values 

    //size of array
    cout<<sizeof(a)<<endl;

    //number of elements in array
    int n = sizeof(a)/sizeof(int);// we can use this value to iterate over array easily 
    cout<<n<<endl;

    //input 5 elements from user
    for(int i=0;i<5;i++){
        cin>>a[i];//rest 5 elements will contain garbage values
    }
    //update single alement of array
    a[8]=100;
     
    //print all 10 elements 
    for(int i=0;i<10;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}