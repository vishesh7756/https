#include <bits/stdc++.h>

using namespace std;
//its about recursion 

int factorial(int a) {
    // 1. Base Case: Stops the recursion when 'a' drops to 1 or less.
    // Without this, it would keep calling factorial(0), factorial(-1)... 
    // and crash due to a stack overflow.
    if (a<=1)
{
    return 1;
} 
// 2. Recursive Case: The function calls itself with (a - 1).
return a * factorial(a-1);
}
int main(){
int a;
cout<<"enter the value";
cin>>a;

cout<<"the value of factorial "<<a<< "is:"<< factorial(a);


return 5;
}
