#include<iostream>
using namespace std;

//function prototype
//type function-name (argument);
int sum (int a , int b);

int main (){
int num1 , num2;
cout<<"enter num1"<<endl;
cin>>num1;
cout<<"enter num2"<<endl;
cin>>num2;
// num1 and num2 are actual parameters.
cout<<"the sum is :"<<sum(num1 , num2)<<endl;
    return 0;
}    
//function defination
// formal parameters a and b are taking values from actual parameters num1 and num2.
int sum(int a , int b)  {
int c = a + b;
return c;
}   

