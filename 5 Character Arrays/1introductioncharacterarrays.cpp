//important note we can also declare a arraay integer or character as a[]={'a','b','c'} its size will be 1+1+1 = 3 bytes
/*if we do char a[10] = {a,b,c} than the first 3 positions are occupied but rest willb be garbage
 char a[10]={a,b,c,null character}we have to terminate each character array by a special character
 caller null character
 null character is special character having 0 ascii valuye*/
 #include<iostream>
 using namespace std;
 
 int main(){
    int b[]={1,2,3};
    cout<<sizeof(b)<<endl;
    cout<<b<<endl;// in case of integer array we will get the address ,,weget address(default behaviour for any array)
    char a[]={'a','b','c','d','e','\0'};
    cout<<a<<endl;//in case of character array we got all elements of array ,,we get content(special case for ch array)
    //we get contents of array unless we find a null
    //so it is recomende practice to terminate character array by null


    //another difference 
    /*in case of int array we have to create loop for input
    in case of character array we can use directly cin*/
    char s[10];
    cin>>s;//when we input by this method or when we input a string this null is automatically added we  can prove it by outputing its size
    cout<<s<<endl;
    

    char s1[] = {'h','e','l','l','o'};
    char s2[] = "hello";

    cout<<s1<<"  "<<sizeof(s1)<<endl;//when we cout it we get s1 and s that we have inputed earlier as it is garbage and it has ended with null so it ends after s input 
    cout<<s2<<"  "<<sizeof(s2)<<endl;

    //another ways to create character arrauy

    char s3[10] = "helllo";
    char s4[10] ;
    cin>>s4;
    cout<<s4<<endl;
    return 0;
 }