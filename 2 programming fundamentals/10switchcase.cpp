//todo switch case statement is alternate to vey simpole if else condition
//!problem--> design a menu- where pressing a button gives you the corresponding item
/**
 *  b-burgwe
 *  m-maggi
 *  p-pizza
 *  c-coke
 *  d-dosa
 * and so on*/
#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    //instead of switch condition we can also do if else
    switch(ch){
        case 'B' :// we can also do this with every letter as everything after it and till break will get executed 
        case 'b' /*this can be simple chhar,int,strings not complex things like if else*/ : cout<<"burger";
        break;
        case 'm' : cout<<"maggi"<<endl;
        break;// after every statement we have to use break why? because in switch case eveerything below a case if it becomes true get executed
        case 'p' : cout<<"pizza"<<endl;
        break;
        case 'c' : cout<<"coke"<<endl;
        break;
        case 'd' : cout<<"dosa"<<endl;
        break;
        default : cout<<"item not available";
        
    }
    return 0;
}
