// what is sorted array/sorted array is the array in which elements are arranged in ascendior decending numerical,alphabetical order
//
//binary search is efficient way to search in sorted arrays
/**
 * so what we do is we find middle element m=(s+e)/2, we will take its gif
 * we can find its value if it is smaller we can discard all elements greater than or equal to it
 * now we shift our end to m-1 and it becomes e 
 * and we again do same thing , if the number is bigger than it we can deiscard all elements less than or equal to it an our new satrt becomes m+1
 * we can do same thing untill we encounter that element directly
 * a[m]<key---> s=m+1
 * a[m]>key---> e=m-1
 * if we does not encounter thta element than our start becomes greater than end which cant happen 
 */


#include<iostream>
using namespace std;

int binary_search(int a[],int n,int key){
    int s=0;
    int e=n-1;//this helps in removing garbage values
    while(s<=e){
      int m=(s+e)/2;
      if(a[m]==key){
        // cout<<"this element do exist at index "<<m;
        return m;
      }
      else if(a[m]>key){
        e=m-1;
      }
      else{
        s=m+1;
      }
    }
return -1;
}





int main(){
    int n,key;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the number you want to search"<<endl;
    cin>>key;

    cout<<binary_search(a,n,key)<<endl;
    //if -1 comes than it is not present 
    return 0;
}