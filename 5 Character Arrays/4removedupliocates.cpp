#include<iostream>
#include<cstring>
using namespace std;
//remove consecutive duplicates charecters from a string 
//idea is to skip charecters that are same
void removeduplicates(char a[]){

    int l = strlen(a);
    if(l==0 or l==1){
        return;
    }
    int previous = 0;

    for(int current = 1;current<l;current++){
        if(a[current]!=a[previous]){
            previous++;
            a[previous]=a[current];
        }
    }
    a[previous+1]='\0';

    return;
}

int main(){
    
    char a[1000];
    cin.getline(a,1000);

    removeduplicates(a);
    cout<<a;


    return 0;
}