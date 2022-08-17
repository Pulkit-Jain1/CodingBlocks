#include<iostream>
#include<cstring>
using namespace std;
/*Question-----------> read N , followed by N strings and print the largest string and its length*/
int main(){
    
    int n;
    cin>>n;
    char a[1000];
    cin.get();//to consume enter after n
    int length=0;
    char b[1000];

    for( int i = 0 ; i<n ; i++){//when we type n and press enter cin.get line reeads it as \n and reduced our one input sooo fix is
    //so how we skip it as it is single charecter we can put one cin.gfet 
        cin.getline(a,1000);
        int l = strlen(a);

        if(l>length){
            length = l;
            strcpy(b,a);//to copy entire string it is under <cstring>
        }
    }
    cout<<b<<endl<<length;
    return 0;
}