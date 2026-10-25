#include <iostream>
using namespace std;
//this will not swap 

int sum (int a ,int b){
int c=a+b;
return c;
}
//this will not swap
// void swap (int a ,int b){
// int temp = a;
// a=b;
//  b = temp;
// }
// void swap_pointer(int*a , int*b){
// int temp = *a;
// *a=*b;
// *b=temp;
// }
// int main (){
// cout<<"the of 4 and 5 is "<<sum(4 ,5)<<endl;
// //this will not swap
// int x=4 , y=5;
// cout<<"the value of a is : "<<x<<"the value of b is :"<<y<<endl;
// //swap (x,y); this will not swap
// swap_pointer(&x,&y);
// cout<<"the swapped value of a is :"<<x<<"the swapped value of y is :"<<y<<endl;
// swap using refrence variable /////////////////////////////
void swaprefrencevariable(int &a , int &b){
int temp = a;
a=b;
b=temp;
}
int main (){
cout<<"the of 4 and 5 is "<<sum(4 ,5)<<endl;
//this will not swap
int x=4 , y=5;
cout<<"the value of a is : "<<x<<"the value of b is :"<<y<<endl;
//swap (x,y); this will not swap
swaprefrencevariable(x,y);
cout<<"the swapped value of a is :"<<x<<"the swapped value of y is :"<<y<<endl;
    return 0;
} 