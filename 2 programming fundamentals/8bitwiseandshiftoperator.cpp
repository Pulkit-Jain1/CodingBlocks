//bitwise operators and shift operators
/*
& bitwise and binary
| bitwise or binary
~ bitwise not 
^ bitwise xor binary
how and/or/not gate work?
    just like class 12th phyics and mathematical reasoning chapter (truth table)
how xor gate works?
    it stands for exclusive or (mathematical reasoning chapter)(exactly one bit is 1)
    1^1=0
    1^0=1
    0^1=1
    0^0=0 
    another property of xor is xor of same numbrs is zero example ---> 5^5=0 , 5^7^5=7 (0^7=7)
a=5
b=7
a&b/a|b =(it will perform and operation on bitwise level)5->0000101
                                                       7--->0000111
                                                        and 0000101=5
                                                        or  0000111=7
                                                        xor 0000010=2
                                                        not vey easy we know 
SHIFT WISE OPERATOR------>
(they are also binary operaor)( they also requires teo operants)
5<<1 -------> we are going to shift all bits by one posiion towards left, 0000101----->0001010(10){bits on the left side will be discarded}
left shift by 1 means multiplication by 2                                 2^2+2^0      2(2^2+2^0)
a=a<<1--->a=a*2
a=a<<2--->a=a*2^2
a=a<<b--->a=a*2^b
right shift does division
a=a>>b--->a=a/2^b{integer division means 5/2=2 not (2.5)}
a=10,a>>1----------> 00001010-->00000101(5)(discarding bits from right)----> 00000010(2)---->00000001(1)------->00000000(0)
a>>3 mis equivalent to doing right shift 3 times(obvious)
*/