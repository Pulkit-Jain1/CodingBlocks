//write programme to calculate digits,
//whitespace,alphabets and other charecters terminated by $
#include<iostream>
using namespace std;
// if we use cin than we will not be able to read tab next line and spaces so we use cin.get
int main(){
    int digits = 0;
    int alphabets = 0;
    int spaces = 0;
    int other = 0;

    char ch;
    ch = cin.get();

    while(ch != '$'){
        if(ch>='0' and ch<= '9'){//as charecters are stored as numbers ( ascii value )(available in ascii table)(when we are using <= or >= 
        //programme is automatically converting these into their ascii values)
            digits++;
        }
        else if ((ch>='a' and ch<='z') or (ch>='A' and ch<= 'Z')){/*if we are using different operators
        having same precendence ( see on precendence table online- if we are using multiple operators
        than we will implement them on the basis of precendece table) than we will look at associativity(see it slso online
        in our example also there are 'and' and 'or' so we have to look at table or we can use brackets) */
            alphabets++;
        }
        else if (ch==' ' or ch=='\n' or ch=='\t'/*tab*/){
            spaces++;
        }
        else{
            other++;
        }
        ch=cin.get();   
        }
    
    cout<<"digits "<<digits<<" alphabets "<<alphabets<<" spaces "<<spaces<<" others "<<other;
    return 0;
}