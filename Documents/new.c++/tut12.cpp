#include <iostream>
using namespace std;
int main (){

//what is a pointer?-------->>a data type which hold the variable of other data types
int a=6;
int* b=&a;
//   & ----> adress of operator
cout<<"the adress of a is "<<b<<endl;

cout<<"the adress of a is "<<&a<<endl;

//  * ---->  (value at )dereference operator
cout<<"the value of b is "<<*b<<endl;

//pointer to pointer 
int**c=&b;
cout<<"the value of adress of b is "<<c<<endl;
cout<<"the value of adres of b is "<<&b<<endl;




    return 0;
}