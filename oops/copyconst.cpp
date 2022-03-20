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
demo(demo& d)
{
  cout<<"copy constructor called ";
  this->a=d.a;
  this->b=d.b;
}
//by reference agar nhi pass karunga to loop me phas jaunga to iske liye reference se bhajunga taaki dono ka adddress same ho 

void print()
{
  cout<<this->a<<" "<<this->b;
 }
};
int main()
{
  demo d(2,5);
  
 d.print();
  cout<<endl;
  demo p(d);
  cout<<endl;
  p.print();
  
}
