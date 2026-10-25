#include<iostream>
using namespace std;


//structures --->> we use structurs to save values of diffrent type of data types
struct student
{
    /* data */
int studentclass;
char stuclbranch;
float marks;
};
//union ----> we use union if we have to save diffrect types of values but we only need once at a time 

union money
{
    int dollar;
    char car;
    float pound;
};
int main(){

// struct student vishesh;
// struct student ramdas;
// vishesh.studentclass=12;
// vishesh.stuclbranch= 'c';
// vishesh.marks=200.23;
//cout<<vishesh.marks;
///////////////////////////////////////////////////////////////////////union/////////////////////////////

union money m1;
m1.car='b';

cout<<m1.car<<endl;








    return 0 ;
}