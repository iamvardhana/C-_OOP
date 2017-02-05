//Hybrid Inheritance
#include<iostream>
using namespace std;
class A
{protected:int x,y;
public: void input()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
class B
{
protected:int x,y;
public: void input1()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output1()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
class C:public A,public B
{protected:int x,y;
public: void input2()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output2()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
class D:public C
{
public: void input3()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output3()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
class E:public C
{public: void input4()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output4()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
int main()
{
D one; E two;
cout<<"\nDerived class D.:\n";
one.input3();one.output3();
one.input2();one.output2();
one.input1();one.output1();
one.input();one.output();
cout<<"\nDerived class E.:\n";
two.input4();two.output4();
two.input2();two.output2();
two.input1();two.output1();
two.input();two.output();
return 0;
}
