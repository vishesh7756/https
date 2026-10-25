#include <bits/stdc++.h> 
using namespace std;
int main (){
    //to convert degree ferenhite into celcius
// float F;
// cout<<"enter thr value of frenhite"<<endl;
// cin>>F;
// float c=(F-32)*5/9;
// cout<<"the value  in celcius is "<<c;

// WRAP IN C++  to find distance between two poiunts 
// float x1,y1,x2,y2,d;
// cin>>x1>>y1>>x2>>y2;
// d=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
// cout<<d;

//to calculate the gross salary
// float basic_salary,DA,HRA,PF,GS;
// cin>>basic_salary;
// DA=(basic_salary)*15/10;
// HRA=(basic_salary)*2.5/10;
// PF=(basic_salary)*12/100;
// GS=basic_salary+DA+HRA-PF;
// cout<<GS;

// swapping of twwo numbers
//  int a,b,t;
// cout<<"enter the value of a and b"<<endl;
// cin>>a>>b;
// t=a;
// a=b;
// b=t;
// cout<<"the swapped value of a and b is:"<<a<<"  "<<b;
// a=a+b;
// b=a-b;
// a=a-b;
// cout<<"the swapped value of a and b is "<<a<<b;

//write a area of triangle using heron's formula
// float a,b,c,s;
// cin>>a>>b>>c;
// s=(a+b+c)/2;
// cout<<sqrt((s)*(s-a)*(s-b)*(s-c));


//write a programme in c++ to check a given number is either even or odd
// using conditional operator

// int x;
// cin>>x;
// (x%2==0)?cout<<"even":cout<<"odd";

//two numbers are equal or not 
// int a,b;
// cin>>a>>b;
// (a==b)?cout<<"same" : cout<<"not same";

//to check a given yeatar is a leap year 

// int x;
// cin>>x;
// (x%400==0) || (x%4==0)&&(x%100!=0)? cout<<"year is  a leap year":cout<<"is not  a leap year";

// print the biggeest number 
// int a,b;
// cin>>a>>b;
// (a>b)?cout<<a<<"is a bigger number":cout<<b<<" is bigger number";

// to check the given alphabet is wovel or constan/t
// char x;
// cin>>x;
// (x=='a'||x=='e'||x=='i'||x=='o'||x=='u')?cout<<"number is wovel":cout<<"number is consonant";    


int a,b,c;
cin>>a>>b>>c;
(a >= b && a >= c) ? cout << "Sabse bada: " << a :
(b >= a && b >= c) ? cout << "Sabse bada: " << b : 
 cout << "Sabse bada: " << c;

// BITT WISE operator  


// int z=64>>2; 
// //means right side bitwise operator 
// cout<<z<<endl;
// int y=16<<2;
// cout<<y<<endl;
// int a=~10;
// cout<<a<<endl;

// int x=5;
// int z;
// z=(++x) + (++x)+ (++x);
// cout<<z;

// int x=5,z;
// z=++x * ++x * ++x;
// cout<<z;

// int x;
// cin >> x;

// cout << (x > 0 ? "positive" : (x == 0 ? "zero" : "negative"))

// int n, sum,a;
// cin>>n>>a;
// sum=(n/2)*(2*a+(n-1)*1);
// cout<<sum;
// int i,sum=0,n;
// cin>>n;

// for ( i = 0; i <=n; i++)
// sum=sum+i;
// {
//     cout<<sum;
// }











                         
    return 0;
}









