/* Primitive Datatypes
int(integer),float(decimal),bool(0,1)or(true,false)(true/false is not a string),double(decimal with high precision),char(charecter)
to store string we can also use datatype string

how much memory each is going to occupy??*/
#include<iostream>
using namespace std;

int main(){
    int x;
    float y;
    bool rainyday;
    double pi;
    char ch;
//we can also use name of datatype directly    1byte=8bits(1 bit is either 0 or 1)
    cout<<sizeof(x)<<endl;//4 bytes not bits
    cout<<sizeof(y)<<endl;//4 bytes
    cout<<sizeof(rainyday)<<endl;//1 bytes
    cout<<sizeof(pi)<<endl;//8 bytes
    cout<<sizeof(ch)<<endl;//1 butes
    return 0;}
    /*understanding range of datatypes
    we have cells in computer memory devided into smaller parts of size 1 byte
    1 byte in minimum allocation done on computer system
    5--->101(3bits)
    x= 5 later it cahnges it into
    x= 15 ----> 1111(4bits) but memory cant be changed now to 4 bits so thatswhy 
    we have fixed memory allocaation for each datatype
    compiler allocates fixed memory for each data type
    so our 5 will be stored as 0000........101
    maximum limit for 4 byte(limit an integer int can have)???
    for 2 bites we can make a total of 4 numbers 0minm-----2^2-1maxm
    for 4 bytes-32bits we can make -----------0minm-----(2^32)-1maxm
    these above are examples of unsigned int means can only store positive number in above range 
    by default all your integers are signed integers means it can store both positive and negative integer
    we reserve 1 bit for sign ---0forposittive and 1fornegative
    maximum number formed by N bits is 2^(n-1)-1{positive range}
    how negative numbers are stored?
    2's compliment notation/form (which is non intuitive method) we flip all bits of +5(1to0 and 0to1) and add 1
    5  - 5 = 0
    0101 - {1010+1='1'011(starting 1 depicts -ve )}(2s compliment form),(assuming 5 is stored in 4 bits)
    question-- 32bit no. which is all one , what number is this?
    anser -1
    how to covert 2s compliment form to human readable form??
    answer - 1st see if 1st digit(sign bit) is one as it shows negative number
    now to proceed again apply 2s complkement form to negative number as -(-x)=x
    now proceeding to our answer we get all zeroes in 32 bits and after adding 1 we get 00.....1 so it becomes nothing but 1
    so our answer is -1
    one more small thing how to add binary number to a binary numvber--
    for example +8-->1000(in4bits)
    to make it -8 applying 2s compliment fliping 0111
    now adding 1 to +1=2which is binary 10 so   +0001
    take 0 and give 1 as carry                           
                                    -8 =         1000
    
    now coming to RANGE--> for n bits we can store from -2^(n-1) t 0 to 2^(n-1)-1
    for 32 bits --------------------------> -2^31 to 2^31 - 1
    for FLOAT - there is internal split -- for sign , for magnitude and for precision seperate bits are allocated
    for DOUBLE - there is internal split and there is more bits for precision 
    for CHARECTERS - use 1 byte means 8bits means 256 combinations 
    and in keyboard there are <=256 charecters numbered from 0 to 255
    there is a table called ascii table which assign unique integer for each charecter
    for BOOLEAN - can only store two value true of false 
    if we do bool x=5 then it will be considered as true as any non zero value is considered as true
    why it is assigned 1 byte-8bits as we only need 1 bit
    as 1 byte is the minimum allocation that the compiler can do at memory level */
    
