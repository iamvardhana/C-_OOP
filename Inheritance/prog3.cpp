//Hierarchical Inheritance
#include<iostream>
using namespace std;
class A
{
protected:
    int x,y;
public: void input(){
cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
class B:public A
{
public: void input1()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output1()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
class D:public B
{
public: void input3()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output3()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
class E:public B
{
public: void input4()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output4()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
class C:public A
{
public: void input2()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output2()
{cout<<"The two numbers are "<<x<<" and "<<y<<".\n";}
};
class F:public C
{
public: void input5()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output5()
{cout<<"The two numbers are "<<x<<" and "<<y<<".\n";}
};
class G:public C
{
int x,y;
public: void input6()
{cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output6()
{cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};
int main()
{
D one; E two; F three; G four;
cout<<"\nDerived class D.";
one.input3();one.output3();one.input1();
one.output1();one.input();one.output();
cout<<"\nDerived class E.";
two.input4();two.output4();two.input1();
two.output1();two.input();two.output();
cout<<"\nDerived class F.";
three.input5();three.output5();three.input2();
three.output2();three.input();three.output();
cout<<"\nDerived class G.";
four.input6();four.output6();four.input2();
four.output2();four.input();four.output();
return 0;
}
