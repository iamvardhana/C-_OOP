//Multilevel Inheritance
#include<iostream>
using namespace std;
class A
{int x,y;
public: void input()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output()
{cout<<"\nThe two numbers are"<<x<<" and "<<y<<".\n";
}
};
class B:public A
{int x,y;
public: void input1()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;
}
void output1()
{cout<<"\nThe two numbers are"<<x<<" and "<<y<<".\n";
}
};
class C:public B
{int x,y;
public: void input2()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output2()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";
}
};
int main()
{C one;
cout<<"\nFunction call of derived class.\n";
one.input2();
one.output2();
cout<<"\nFunction call of intermediate class.\n";
one.input1();
one.output1();
cout<<"\nFunction call of base class.\n";
one.input();
one.output();
return 0;
}
