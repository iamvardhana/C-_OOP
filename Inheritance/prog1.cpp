//Single Inheritance
#include<iostream>
using namespace std;
class A{
protected:
    int x,y;
public: void input(){
cout<<"\nEnter two numbers: ";
cin>>x>>y;
}
void output(){
cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";
}
};
class B:public A{
public: void input1(){
cout<<"\nEnter two numbers: ";
cin>>x>>y;
}
void output1(){
cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";
}
};
int main()
{
B obj;
cout<<"\nFunction call to the derived class.";
obj.input1();
obj.output1();
cout<<"\nFunction call to the base class.";
obj.input();
obj.output();
return 0;
}
