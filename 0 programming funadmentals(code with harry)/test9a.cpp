// this is an example of if else statements
 #include <iostream>
using namespace std;
int main(){
    int age; 
    cout<<"tell me your age \n ";
cin>>age;   
if ((age<18) && (age>0))
{
    cout<<"you can not come to the party\n";
}
else if (age==18){
    cout<<"you are a kid and you will get a pass to the party";
}
else if ( age <1){
    cout<<"you are not yet born";
}
else {
cout<<"you can come the the party";
}
return 0;
}
