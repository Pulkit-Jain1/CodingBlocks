#include<iostream>
using namespace std;
int x=100;//global scope
int main(){
    //scope--> defined for a variable(how asscible variablke is)(
     /*   region of the code where we can use it)
     (lifetime and visibility of the code)
     mainly we have two type of scope
     local scope
     and
     global scope
     anything defined in a curly bracket follows local scope for that bracket(if-else,loops,functions)*/
    int x=10;//if we remove this line the cout value of x becomes 10
    //int x=20;//we cannot declare two variables with same name in same scope,but we can declare variables with same name if they exist in different scopes{in different curly brackets}
    cout<<x;//when we cout x it tries to find x which is defined in local scope ie inside curly
    //brackets and if it is unable to find thaan it goes to see global scope
    for(int x=0;x<=5;x++){//which value will x start from 100,10or0 answeer->0 as we have seen anythig inside curl;y bracket is local scope
        cout<<x<<endl;//loop scope x get printed
    }
    //if we want to take both local and global values of x
    cout<<x<<endl;//for local variable-->10
    cout<<::x<<endl;//for global varibale we are using scope resolution operator-->100
    return 0;
}