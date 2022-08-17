//sorting a list of strings laxiographically
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//comparator function
bool compare(string a, string b){//if we want ot compare on the basisof length
    if(a.length()==b.length()){
        return a<b;//now we compare lexiographically
    }
    return a.length()>b.length();
}

int main(){
    int n;
    cin>>n;
    cin.get();//to consume enter

    string s[100];

    
    for(int i = 0;i<n;i++){
        getline(cin,s[i]);//cin.getline does not work in this case
    }
    
    sort(s,s+n/*,compare -->we will write it here if we want to cmpare on the basis of length*/ ); //how comparison will work out --> comparison is based on laxiographical ordering 

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    
    return 0;
}