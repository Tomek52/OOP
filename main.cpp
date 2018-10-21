#include<iostream> 
using namespace std; 
  
class A 
{ 
public: 
  A()  { cout << "A's constructor called" << endl; } 
}; 
  
class B 
{ 
public: 
  B()  { cout << "B's constructor called" << endl; } 
}; 
  
class C: public B, public A 
{ 
public: 
  C()  { cout << "C's constructor called" << endl; } 
}; 


  int main() 
{ 
    A* a = new B; 
    C* a = new B;
    B* b = new C;
    return 0; 
} 


