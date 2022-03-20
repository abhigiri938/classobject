#include<iostream>
using namespace std;
class demo 
{
public:
int a;
int b;
demo(int a,int b)
{
 
  this->a=a;
  this->b=b;
}
//copy constructor
demo(demo &d)
{
  this->a=d.a;
  this->b=d.b;
}
void print()
{
  cout<<this->a<<" "<<this->b;
 }
};
int main()
{
  demo *d=new demo(2,5);
  cout<<"d constructor"<<endl;
 d->print();
  cout<<endl;
  demo *p(d);
  cout<<"p constructor called"<<endl;
  p->print();
}