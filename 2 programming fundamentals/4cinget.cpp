#include<iostream>
using namespace std;

int main(){
    //problem- read a list of charecters (sentence)
    //cin.get()
    char ch;
    cin>>ch;
    while(ch!='.'){
      cout<<ch;  //print the last charecter that we have read
        cin>>ch;//update my char in the memory (read the next charecter)
    }
    //we can type a charecter and it will also print that charecter 
    //or we can print whole sentece directly for example --> we can type hello_world.
    //and it will output hello_world
    //means it is able to read whole sentence
    //how??
    /*when we press enter after writing hello_world. it is transferref to programme from console
    it goes into a special memory called input buffer which controls alll this memory from it it is picked by 
    the loop and it prints charecter by charecter however in charecter memory only 1 charecter is stored
    after that it goes to the output buffer from where it get printed on the console
    if we print hello world. but output is helloworld only no space is there , space also goes into input buffer
    but cin does not read white space or space
    if we want to read this special charecters like space we cannot use cin
    we have to use cin.get*/
    char car;
    car = cin.get();//this method reads any single charecter including spaces/new line from the input buffer
    //reads the first cahrecter
    while(car!='.'){
        //we have written cout inside therefore everytime we use enter it prints the given value put cout outside to remove this function of getting cout everytime we press enter
        car=cin.get();//read the rest of the charecters 
    }cout<<car;
//input---hello world.
//output---hello world we are able to get spaces
    return 0;
    }
   
   
