// sort an array using sort() function, much more efficient than rest all other sort methods

#include<iostream>
#include<algorithm>//can be used in online contests to quickly sort
using namespace std;

//define a comparator function
bool compare(int a, int b){//this is comparator function,,this function is called multiple times to prove this we have used cout in this function
    cout<<"comparing "<<a<<" and "<<b<<endl;
    return a>b;//if b>a than in ascending order ,, return a>b means if a>b than only output true 
    //!now it will print in descending order
}


int main(){
    int n,key;
    cin>>n;

    int a[1000];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n, compare);//1st parameter is the starting point of container , container can be anthing like array vector
    //2nd  parameter is starting and ending point of array to which you want to sort[first element is include but
    //ending point is not included[s,e) so for array starting from a and having n elements last element is 
    //a+n-1 but we will use a+n instead(as it is not included)]

    // what is compare(comparator) function ??
    //we are not calling compare function,instead we are sending a function as a paameter to another rfunction (which is new thing)
    //logic of this compare function is like if condition in bubble sort(dont overthink it) as sort function is very like bubble sort
    //?in sort we are passing function name as a parameter to the sort function , it is caller internally in sort function

    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}