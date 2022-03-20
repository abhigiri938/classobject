#include<iostream>
using namespace std;
class demo{
//class includes data members and  methods and one thing that is access modifiers 
int abhi;//a is private so we cant access so we made function getter and setter
public:
int b;
int getter()
{
  return abhi;
}
void setter(int a)
{
  abhi=a;
}

 // void sum(int a,int b){
 //    cout<<a+b;
 // }
};//class is also terminated by semi-colon at the end
int main()
{
//now we create objects 
 // demo c;
demo *d =new demo ;
// cout<<d.getter();//garbage value print so now we set the value
  
  (*d).setter(5);
(*d).b=4;
cout<<(*d).getter()<<" "<<d->b<<endl;
  //we can also dereference the adress by -> arrow operator for dynamic object
}