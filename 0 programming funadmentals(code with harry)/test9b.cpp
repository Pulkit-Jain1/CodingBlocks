//swith case statement
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell your age\n";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18";
        break;

    case 22:
        cout<<"you are 22";
        break;

        case 2:
        cout<<"you are 2";
        break;
    default:
    cout<<"no special cases";
        break;
    }
    // if we not write break than tghe conditions after that also print breaks is very important
    // break tell to jump out of the switch statement for exxample it puts us out of {}
}