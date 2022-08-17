//search in row and column wise sorted arrayy(sorted along rows and columns both)
/*
1 4 8 10
2 5 9 15
6 16 18 20
11 17 19 23
we can do by brut force , linear search it will reequire N^2 steps
what can we do we can search by binary method in first row as binary search take logn steps
an do it in all rows it will take Nlogn steps
what can we really do ?
we can start from 10 and see if key is grreater than it or not and move accordingly
it will take 2n steps or propotional to N steps
*/
#include<iostream>
using namespace std;
void stair(int a[50][50],int m,int n, int key){
    int row = 0;
    int column = n-1;
    while(row<m and column<n){
        if(a[row][column]==key){
            cout<<"found at index "<<row<<" "<<column; 
            return;   
        }
        else if(a[row][column]<key){
            row++;
        }
        else{
            column--;
        }
    }
    cout<<"Not Found";
    return;
}




int main(){
  //for input
    int m,n,key;
    cin>>m>>n>>key;
    int a[50][50];
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }  
    }
    
//for display
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;}


    stair(a,m,n,key);

    return 0;
}
