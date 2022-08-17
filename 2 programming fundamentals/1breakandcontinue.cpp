#include<iostream>
using namespace std;

int main(){
    // break - that is statement that is added to stop a loop based upon certain codition
    //break can only be executeed 1 time
    //while continue can be executed multiple times


    
    //problem- read a stream of numbers until you get a multiple of 7
    int no;
    

    while(true)//infiniteloop
    {cin>>no;

    if(no%7==0){
        //stop processing more numbers
        break;//take you out outside the loop
    }
    cout<<"NO "<<no<<endl;
    }
    cout<<"came out of the loop";


//while will take you to the starting of the loop,skip anything written below it and
//take you to the starting of loop

        while(true)//infiniteloop
    {cin>>no;

    if(no%7==0){
        //stop processing more numbers
        continue;//take you to the starting of the loop
    }
    cout<<"NO "<<no<<endl;
    }
    cout<<"came out of the loop";




    return 0;
}