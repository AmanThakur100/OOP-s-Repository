//deleting a derived class object using a pointer of base class type results in undefined behavior.
#include<iostream>
using namespace std;

class Test1{
    public:
        Test1(){
            cout << "Test1/base constructor called" << endl;
        }
        virtual ~Test1(){
            cout << "Test1/base destructor called" << endl;
        }
};

class Test2: public Test1{
    public:
        Test2(){
            cout << "Test2/derived constructor called" << endl;
        }
        ~Test2(){
            cout << "Test2/derived destructor called" << endl;
        }
};

int main(){
    Test1 *p;
    Test2 *obj2 = new Test2();
    p = obj2;

    delete p;
}

// making of base class destructor virtual guarantees that the object of derived class is destructed properly.
