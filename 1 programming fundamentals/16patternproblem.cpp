#include<iostream>
using namespace std;

int main(){
    //code to print the pattern N=5
    //     1
    //    232
    //   34543
    //  4567654
    // 567898765  
    int total_r ;
    cin>>total_r;
    int row = 1;
    while(row<=total_r){
        int space = 1;
        while(space<=(total_r-row)){
        cout<<" ";
        space++;}
        int a =1;
        int b = row;
        while(a<=row){
            cout<<b;
            b++;
            a++;
        }b--;
        int y=1;
        while(y<=(row-1)){
            b--;
            cout<<b;
            y++;
         }
         cout<<endl;
        row++;

    }

    return 0;
}