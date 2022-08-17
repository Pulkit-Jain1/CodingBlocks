//insert the current element in "right position" inspired by game of cards
//first position is sorted and from unsorted array we will try to arrange it in correct order of sorted array


//!!!!!!!!!!!!!!!!!             HARD            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


#include<iostream>
using namespace std;


int insertionsort(int a[],int n){
    for(int i=1;i<=n-1;i++){

        int e = a[i];
        int j = i-1;
        while(j>=0 and a[j]>e){
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=e;
        
        }
    }





int main(){
    int n,key;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionsort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}