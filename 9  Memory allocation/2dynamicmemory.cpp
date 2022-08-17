//!                    dynamic allocation/run time allocation
/*
allows you to deffine memory requirement during run time 
uses a special part of memory called HEAP MEMORY
lets say memory has two parts static and dynamic/heap
generally heap memory has big size than static memory
we can reuse memory 
we use 2 special keywords here
new and delete
new for allocating memory
delete is used to free the memory

in compile time allocation the allocation/deallocation is done by the compiler itself

here it is done by programmer 
we have to write code to allocate and deallolocate memory

for example of code

new int (create integer in heap memory)(no variable name )(how to identify it)(when we write new int it returns adfress of the varibale that is creaed on the heap)
(this allocatin happens on run time)
how to acess variable 
int* ptr(this part is stored in sattic memopry) = new int(this part will bve on heap memory);
this technique is usefull for very large arrray(or arrays in general)


int x (create in static type of memory)
(this allocation happen on compile time)


exapmple of run time allocation 
int a [1000];(statically created array)
cout<<sixzeof(a)(true size)



int* a (this a is stored in static memory)= new int[1000](dynamic allocation)
cout<<sizeof(a)//here a is not a array it is a pointer to a array //so size of array will be printed that is 4/8
a= new int[500] now this a will point to new array (new part of the memory )
now old array will still exist but there is no way to refer that array and this is 
!  memory leak (wassted this much memory)
we should have removed older array first using
delete []a
during run timea all this steps are executed

*/