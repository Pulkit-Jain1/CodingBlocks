//there are two dimensions row and column and it allow us to create matrix(grid) and access them
//we have to define both rows and column while creating 2d array
//indexing here also starts from 0
//indexing format---> (row,column)

//how are they stored in memory of computer ?
//it is also stored in linear fashion for exaple first we store 1st row than we store 2nd row and so on 
#include<iostream>
using namespace std;

int main(){

    //how to create a 2d array 
   int a[/*rows*/ 500][/*columns*/ 500]= {0};//it has all zeroes
   //? i dont know why 1000 rows and 1000 columns are not working in above line
    int m,n;
    cin>>m>>n;
 
    //how to access a particular element
    //a[3][2];


//!vary vary imporatant a[3][2] does not mean that this is 3rd row and 2nd column as indexing starts from 0



    //how to update a particular element 
    a[3][2]= 10;
    //values which we dont define are garbage

    //iterate over the array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //filling some numbers 
    int val = 1;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j] = val;
            cout<<a[i][j]<<" ";
            val++;
        }
        cout<<endl;
    }
    return 0;
    
}