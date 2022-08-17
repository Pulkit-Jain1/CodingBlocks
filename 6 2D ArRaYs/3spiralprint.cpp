//we have to traverse a array in spiral fashion
/*
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
our output should be 1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 10 14 ans so on.......*/
#include<iostream>
using namespace std;

int main(){
    int a[50][50];
    int m,n,val;
    val=1;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j] = val;
            cout<<a[i][j]<<" ";
            val++;
        }
        cout<<endl;
    }
    int sr=0;
    int er=m-1;
    int sc=0;
    int ec=n-1;
    while(sr<=er and sc<=ec){//this is not exactly true as it has many corner cases
    //to avoid such cases we havt to only use er>sr and sc<ec
    //but if we apply condition for this in starting while loop then if we app odd no. of rows it fails
        for(int column = sc ; column<=ec;column++){
            cout<<a[sr][column]<<" ";
        }
        sr++;
        for(int row = sr ; row<=er ; row++ ){
            cout<<a[row][ec]<<" ";
        }
        ec--;
        if(er>sr){//for corner cases
        for(int column=ec; column>=sc ; column--){
            cout<<a[er][column]<<" ";
        }
        er--;
        }
        if(ec>sc){//for corner casses
        for(int row = er ; row>=sr ; row--){
            cout<<a[row][sc]<<" ";
        
        }
        sc++;
        }
    }

    return 0;
}