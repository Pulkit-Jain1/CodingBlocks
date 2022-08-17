//given a sorted array , find pair of elements that sum to K(GIVEN)
#include<iostream>
using namespace std;
//there is simple easy approach which we can use easily to find but we will use another method which requires less iteration

//! we will use two pointer approach this is common in many problems
/* we will use two variables 1 at starting and one at ending of our sorted array if req sum is less we will move first pointer
if it is more we will move 2nd pointer(variable) backwards ,, after we found a pair we will move both pointer 1 dirn in their
respective directions and follow same steps         very fast than simple method*/
int main(){
    int n, key;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
        int i=0;
        int j=n-1;
        while(i<j){
            if((a[i]+a[j])>key){
                j--;
            }
            else if(a[i]+a[j]<key){
                i++;
            }  
            else{cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
            }
              }
        



    return 0;
}