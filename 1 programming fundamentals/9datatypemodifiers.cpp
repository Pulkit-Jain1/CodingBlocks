#include<iostream>
#include<climits>//it will contain two special intmax and intmin constants
using namespace std;

int main(){
    cout<<sizeof(long long int)<<endl;
    //data type modifers - used along with datat types to increase or decrease the size alocatted to that datat type in the memory
    //long ,short,signed,unsigned
    //long long int will have 8 bits (only long int will not work it also have 4bytes idk why)
    //long will increase the size
    //short will decrease the size
    //signed int will give you 1 bit less (by default)
    //unsigned will give you one more bit but only work for positive values
    int x;
    cout<<sizeof(x)<<endl;
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    x = INT_MAX;
    //what will happen you add 1 to x ?
    cout<<x<<endl;
    x=x+1;//it is the value of int min !!!!!!!!!
    //happen due to special working of bit system
    //this phenomena is called wrap around also called integer overflow
    //creating a sort of cycle/
    //can lead to wrong answers
    cout<<x<<endl;
    
    return 0;
}