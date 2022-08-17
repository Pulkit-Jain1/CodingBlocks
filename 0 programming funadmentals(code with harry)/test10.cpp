// loops
#include <iostream>
using namespace std;
int main(){
/*loops in C++
there are threee types of loops in C++
1. for loop
2. while loop
3. do-while loop
suntax for for loop
for (initialization ; condition; updation)
{ 
    loop body;
}
*/
// for (int i = 1; i <= 40; i++)
// {
//    cout<<i<<endl;
// }
// //infifnite forloop
// for (int i = 1; 39 <= 40; i++)
// {
//    cout<<i<<endl;
// }
//while loop
// suntax
// while(condition)
// {
//     C++ statements;
// }
//printing 1 to 40 using while loop
// int i = 10;
// while(i<=40){
//     cout<<i<<endl;
// i++;
// }
// //infinite while loop
// while(true){
    
//     cout<<i<<endl;
// i++;
// }
// do while loop
// syntax
int i =1;
do
{cout<<i<<endl;
i++;}
while(i<=40);
//difference betwen do while and while loop it checks condition after running - fo while for example
int a=1;
do
{cout<<a<<endl;
a++;}
while(false);

     return 0;

 }
