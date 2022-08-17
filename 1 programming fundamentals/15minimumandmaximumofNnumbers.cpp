#include<iostream>
#include<climits>
using namespace std;

int main()
{    // find the minimum and maximum of N numbers
    int n,i,no;
    i=0;
    cin>>n;
    int min_so_far = INT_MAX;
    int max_so_far = INT_MIN;
        while(i<n){
            cin>>no;
            if(no<min_so_far)
            {min_so_far=no;}
            if(no>max_so_far)
            {max_so_far=no;}
        i++;
        }
        cout<<min_so_far<<"  "<<max_so_far;
    return 0;
}