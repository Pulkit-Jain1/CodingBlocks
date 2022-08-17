//every programme revolve around data and data needs memory allocation
// in cpp we have two types of memories dynamic(2) and static(1)

//! static/compile time allocation(two names)---------->
/*
int x    4bytes
int ch   1bytes
int a[100] 400 bytes
this much memory must be reserved in system
this variable are allocated in ram and this does NOT used (ram) before programme exectution have started
we are deciding that we map this much variable in ram
let us assume that there is virtual memory
and we are allocating everything in vitual memory we can fix adress of diffrent variables here(compiler uses symbol table for this purpose)
sizes and location(adress)of variablesis fixed during the compile time
and at
run time we can map this to ram easily(these adresses can be mapped easily to physical memory = ram)
just before programme execution this mapping happens 
advantages of compile time allocation -------> slightly fast than dynamic allocation 
disadvantage----------------------------------> less flexible we cant shrink or grow memory during run time*/