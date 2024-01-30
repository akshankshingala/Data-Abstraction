/*
1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations
*/

#include<iostream>
using namespace std;

class circle{
public:

int r,area;
int pi = 3.14;
void sum(){

cout<<"entre number radius:- "<<endl;
cin>>r;

area = pi*r*r;
cout<<"circle ans = "<<area<<endl;

}
};

class triangle
{
public:

int b,h,area;
void sum_1(){

cout<<"entre any num B :- "<<endl;
cin>>b;
cout<<"entre any num H :- "<<endl;
cin>>h;

area = 0.5*b*h;
cout<<"triangle ans = "<<area<<endl;

}
};


class rectangle : public triangle, public circle
{
public:

int b,h,area;
void sum_2(){

cout<<"entre any num B :- "<<endl;
cin>>b;
cout<<"entre any num H :- "<<endl;
cin>>h;

area = b*h;
cout<<"rectangle ans = "<<area<<endl;

}
};
int main(){

rectangle r1;

r1.sum();
r1.sum_1();
r1.sum_2();

return 0;
}
