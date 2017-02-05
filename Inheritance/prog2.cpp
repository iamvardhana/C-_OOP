//Hybrid Inheritance
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
cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};

class B:public virtual A{
public: void input1(){
cout<<"\nEnter two numbers: ";
cin>>x>>y;}
void output1(){
cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";
}
};

class C:public virtual A{
public: void input2(){
  cout<<"\nEnter two numbers: ";
  cin>>x>>y;
  }
void output2(){
    cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};

class D:public B,public C{

public: void input3(){
    cout<<"\nEnter two numbers: ";
    cin>>x>>y;
}
void output3(){
    cout<<"\nThe two numbers are "<<x<<" and "<<y<<".\n";}
};

int main()
{
D obj;
cout<<"\nIn derived  class D :\n";
obj.input3();
obj.output3();
cout<<"\nIn derived  class C :\n";
obj.input2();
obj.output2();
cout<<"\nIn derived  class B :\n";
obj.input1();
obj.output1();
cout<<"\nIn base class A:\n";
obj.input();
obj.output();
return 0;
}
