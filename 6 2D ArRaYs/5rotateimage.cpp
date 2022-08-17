//given a 2d array of size N*N roate the array 90 degrees anti clockwise
#include<iostream>
#include<algorithm>//for reverse function of stl
using namespace std;
// ther are 3 to 4 ways to solve it
/* one way is we can use extra array and take extra space but we have to do without using extra space
so we do without using another array by swaping we will do here but there is an easier way also and implement code
easier way---------> we can first reverse every row using while loop with swap or stl than 
we can covert row to column means take transpose of it a[i][j]becomes a[j][i]*/
void rotate_image(int a[][50] , int m, int n){
    //for reversing rows
    for(int row = 0 ; row<m;row++){
        int i =0;
        int j =n-1;
        while(j > i){
            swap(a[row][i],a[row][j]);
            i++;
            j--;
        }
    }
    //for transpose
    for(int row=0;row<m;row++){
        for(int column=0;column<n;column++){
            if(row<column){
                swap(a[row][column],a[column][row]);
            }
        }
    }
}
void rotate_stl(int a[][50] , int m, int n){
    //same thing uing stl reverse
    for(int i = 0;i<n;i++){
        reverse(a[i],a[i]+n);
    }

//for transpose
    for(int row=0;row<m;row++){
        for(int column=0;column<n;column++){
            if(row<column){
                swap(a[row][column],a[column][row]);
            }
        }
    }
}



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
    rotate_image/*or ratate_stl*/(a,m,n);


             for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;
    }


    return 0;
}