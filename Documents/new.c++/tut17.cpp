#include <iostream>
using namespace std;
//An inline function (declared with the inline keyword in C/C++)
// suggests that the compiler replace the function call directly with the function's actual body code at compile time
inline int product(int a , int b ){
return a*b;
}
int main (){
int a , b ;
cin>>a>>b;

cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;
cout<<product(a,b)<<endl;

cout<<product(a,b)<<endl;




     return 0;
}