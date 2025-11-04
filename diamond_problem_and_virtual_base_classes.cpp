// Diamond Problem - multiple copy of same function inheriting from parent classes to single child class where compiler get confused.

#include<iostream>
using namespace std;

class A{
    public:
        void display(){
            cout << "This is display method from Base class A" << endl;
        }
};

class B: virtual public A{
    void display1(){
        cout << "This is display1 method from class B" << endl;
    }
};

class C: virtual public A{
    void display2(){
        cout << "This is display2 method from class C" << endl;
    }
};

class D:public B,public C{
};

int main(){
    D d;
    d.display();
    return 0;
}
// virtual base class - a single copy of its data members is shared by all the base classes that use virtual base .
