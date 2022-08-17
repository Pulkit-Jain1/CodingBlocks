//string class
/*it is a part of STL
it is alternative of char array
string class wraps charecter array into string object
we can say char a[100] and string s both are same 
it is not a data structure it is like a containerthat contains a charecter array internally*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    string s0;
    string s1("hello");
    string s2 = "hello world"; // string is always writtern in double quotes
    string s3(s2);//s3=s2
    string s4 = s3;//s4=s3
    char a[] = {'a','b','c','\0'};
    string s5(a);
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    //how to check if a string is empty or not 

    if(s0.empty()){
        cout<<"s0 is empty string"<<endl;//which is true
    }
    s0 = "  appending example  ";


    //append


    s0.append(" i love C++");//this will get appended to prev string 
    cout<<s0<<endl;
    s0 = s0 +" and python";
    cout<<s0<<endl;

    //remove/erase the content
    cout<<s0.length()<<endl;//this length function gives how many charecters we have in string
    s0.clear();
    cout<<s0.length()<<endl;

    //compare 2 strings
    s0="apple";
    s1="mango";
    cout<<s0.compare(s1)<<endl;      //returns an integer ==0 if they are equal also returns >0 (bracket one is smaller)or <0(vice verse)
    //note that s1 is not equal to s2 , it is not length
    // we can also use s0<s1 and s1>s0 operators for string

    //overloaded operators
    if(s1>s0){
        cout<<"mango is lexiographically greater than apple"<<endl;
    }

    //square breacket are also defined on string object

    cout<<s1[0]<<endl;//m

    //find sub strings

    string s = "I want to have apple juice";
    int index = s.find("apple");
    cout<<index<<endl;

    //remove  a word from the string 
    string word = "apple";
    int length = word.length();
    cout<<s<<endl;
    s.erase(index,length+1);//we can do length +1 for 1 extra space
    cout<<s<<endl;

    //iterate over all the charecters in the string------> many ways
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<":";
    }cout<<endl;
//! what auto is doing here , auto automatically defines the datatype depending upon waht value is there on RHS
//!        for example if we do auto x= 5 auto will get datatype int

    //iterators
    //we will iterate over [begin , end)

    for(auto/*string::iterator*/ it = s1.begin();it !=s1.end(); it++)
    cout<<(*it)<<",";//here it is iterator , iterators are defined inside class if we have string class than there is another class
    //in it defined as class iterator so if we want to create iterator for string class we will write it as  string::iterator it ,this is exact data
    //type for that iterator so we can use it instead of auto here
cout<<endl;




    //for each loop method , supported method in C++ 11

    for(auto/*char*/ c:s1){
        cout<<c<<".";
    }


    return 0;
}