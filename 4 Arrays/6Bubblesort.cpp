//take the largest element towards end
//by pair wise swapping
//it is inspired from bubbling in water pot the bigger bubble come towars surface
#include<iostream>
using namespace std;

void bubblesort(int a[],int n){
    //!perfect code 
    // for(int i = n-1;i>0;i--){
    //     for(int j = 0;j<i;j++){
    //         if(a[j]>a[j+1]){
    //             swap(a[j],a[j+1]);
    //         }
    //     }
    // }


    //!professional code
    //we need N-1 itrations meaning we need to take N-1 elements to last
    for(int itr =1 ; itr<=n-1 ; itr++){
        //pairwise sorting in unsorted array
        for(int j = 0 ; j<=(n-itr-1) ; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    
}




int main(){
    int n,key;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}