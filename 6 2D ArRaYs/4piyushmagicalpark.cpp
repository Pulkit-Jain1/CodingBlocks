//see coding blocks 2d arrays 3rd video piyush and magical park videofor understancing question
//piyush needs minm K strength to escape given m*n 2d array
//piyush enter with strength obstacles are there in park
/*there are some obstacles like
. if he encounters it strength -2
* if he encounter this strength +5
piyush walks row wise from left of a row to right
if he encounters # than he cant move any further in that row so he skips it and moves to another row without lose in energy
piyush requires a strength of -1 for every move
at any moment if strenth<K he dies
when we move to next row we dont lose strengh
we have to input NMKS and get oupuyt as yes and no and left energy if he sescaped 
we can input array as 4 4 5 20
. . * .
. # . .
* * . .
. # * *        

AND GET OUPTY AS YES AND 13     */



#include<iostream>
using namespace std;
bool success = 1;

void magical_park (char a[][50],int m,int n,int k,int s){
    for(int row=0;row<m;row++){
        for(int column=0;column<n;column++){
            if(s<k){
                bool success = 0;
                break;
            }
            if(a[row][column]=='.'){
                s=s-2;
            }
            else if(a[row][column]=='*'){
                s=s+5;
            }
            else{
                break;
            }
            if(column!=n-1){
                s--;
            }
        }
    }
    if(success){
        cout<<"yes"<<endl<<s;
    }
    else{
        cout<<"no";
    }
}

int main(){
    int n,m,k,s;
    cin>>m>>n>>k>>s;
    char a[50][50];
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }  
    }

    magical_park(a,m,n,k,s);
    return 0;
}