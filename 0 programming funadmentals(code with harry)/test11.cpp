//break and continue in C++
#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if(i==2){
            break;//it comes out of loop
        }
    }
         for (int a = 0; a < 40; a++)
    {
      
        if(a==2){
            continue;
            //it skipes 2 why? jaise hi value 2 gyi vaise hi continue ne bola ki niche jo likha ha usko
            //ignore kro or sidha ujppar jao or dubara start karo thats why it skips 2 and starts with 3
        }
        cout<<a<<endl;
    }
    return 0;
}



