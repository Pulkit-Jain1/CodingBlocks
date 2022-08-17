#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[1000];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    //algorithm to find the largest and smallest number
    int min_so_far = INT_MAX;
    int max_so_far = INT_MIN;

    for(int i = 0;i<n;i++){
        if(a[i]<min_so_far){//or we can use here largest = max(largest,a[i]);
            min_so_far=a[i];
        }
        if(a[i]>max_so_far){
            max_so_far=a[i];
        }
    }
    cout<<min_so_far<<endl<<max_so_far;

    return 0;
}