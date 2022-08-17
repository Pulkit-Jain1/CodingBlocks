//how do you pass functions as parameters
//!                     copying bubblesort code and bool compare code from 8th file     !!!!!!!!!!!!!!!!!!!

//??             new comments will be in blue colour



//take the largest element towards end
//by pair wise swapping
//it is inspired from bubbling in water pot the bigger bubble come towars surface
#include<iostream>
using namespace std;

bool compare(int a, int b){//this is comparator function,,this function is called multiple times to prove this we have used cout in this function
    cout<<"comparing "<<a<<" and "<<b<<endl;
    return a>b;}//if b>a than in ascending order ,, return a>b means if a>b than only output true 



//?this part was implemented by #include<algorithm>


void bubblesort(int a[],int n,bool (&cmp)(int a,int b)){//?this is how you accept a funcyion as a parameter in another function
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
            if(cmp(a[j],a[j+1])){//calling cmp method
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
    bubblesort(a,n,compare);

    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}




//! IMPORTANT         IMPORTANT            IMPORTANT           IMPORTANT         IMPORTANT            IMPORTANT        IMPORTANT 
//now we understood how the compare function was working in previous file 
//not that here the same comparator file that is bool compare was doing ascending work but previously it was doing 
//the descending manner 