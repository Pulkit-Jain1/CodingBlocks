//we hagve to traverse a 2d array like a wave
/*
1 6 7
2 5 8
3 4 9*/ 
//we will get output of these array as 1 2 3 6 5 4 7 8 9 12 11 10
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


    for(int column = 0;column<n;column++){
        if(column%2==0){
            for(int row = 0 ; row<m ; row++){
                cout<<a[row][column]<<" ";
                
            }
        }
        else{
            for(int row = m-1 ; row>=0 ; row--){
                cout<<a[row][column]<<" "; 
                  
            }
        }
       
    }



    return 0;
}