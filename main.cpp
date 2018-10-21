#include<iostream> 
using namespace std;    
class A 
{ 
    public:   
        A()  
        { 
            cout << "A's constructor called" << endl; 
        }

        virtual ~A() = default;
};    

class B : virtual public A
{ 
    public:   
        B()  
        { 
            cout << "B's constructor called" << endl; 
        } 
};    

class C: public B, virtual public A  
{ 
    public:   
        C()  
        { 
            cout << "C's constructor called" << endl; 
        } };   

int main() 
{     
    A* a = new B; 
    B* b = new C;     
    delete a;
    delete b;
    return 0; 
}
