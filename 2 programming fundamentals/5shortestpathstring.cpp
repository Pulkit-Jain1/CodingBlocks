#include<iostream>
using namespace std;

int main(){
    //find shortest distnace(find displacement)
    //for example input string - nnnsseewe
    //output-sum of x and y co-ordinates
    char ch;
    int x=0 , y=0 ;
    ch = cin.get();
    while(ch!='\n'){
        if(ch=='n'){
            y++;
        }
        else if(ch=='s'){
            y--;
        }
        else if(ch=='e'){
            x++;
        }
        else if(ch=='w'){
            x--;
            
        }
        ch=cin.get();
    }cout<<"final displacement is "<<x<<" and "<<y<<endl;
    return 0;
}