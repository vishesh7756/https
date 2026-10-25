#include <iostream>
using namespace std;
int main (){

//array
// we use array to save same type of data type at a single place 
int marks[]={10,5,25,56,80};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
// cout<<marks[4]<<endl;
int i;
for ( i = 0; i<2; i++){
if (i==1)
{
    continue;
}
cout<<marks[i];
}

//cout is :"<<marks[i]<<endl;

// int* p=marks;
// cout<<"the value of marks[0]"<<*(p)<<endl;
// cout<<"the value of marks[1]"<<*(p+1)<<endl;
// cout<<"the value of marks[2]"<<*(p+2)<<endl;
// cout<<"the value of marks[3]"<<*(p+3)<<endl;


    return 0;
}