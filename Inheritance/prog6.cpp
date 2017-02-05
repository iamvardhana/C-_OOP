//Multiple Inheritance
#include<iostream>
using namespace std;
class A
{int x,y;
public: void input()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";
}
};
class B
{int x,y;
public: void input1()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;
}
void output1()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";
}
};
class C:public A,public B
{int x,y;
public: void input2()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;
}
void output2()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";
}
};
int main()
{C one;
cout<<"\nFunction calls of derived class.\n";
one.input2();
one.output2();
cout<<"\nFunction calls of base class two.\n";
one.input1();
one.output1();
cout<<"\nFunction calls of base class one.\n";
one.input();
one.output();
return 0;
}
