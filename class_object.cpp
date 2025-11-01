#include<iostream>
using namespace std;

// class consists of data members and member functions
class FirstClass{
    public:
        string name;
        void printname(){
            cout << "Name is: " << name;
        }
};

int main(){
    FirstClass obj1;
    obj1.name = "Aman";
    obj1.printname();
    return 0;
}

// scope resolution operator

//to access a global variable when there is a local variable with same name"
#include<iostream>
using namespace std;
int x;
int main(){
    int x = 10;
    cout << "value of global: " << ::x;  //0
    cout << "\nvalue of local: " << x;   //10
}

//to access a class static variables:
#include<iostream>
using namespace std;

class Test{
    static int x;
    void func(int x){
        cout << "value of static x is " << Test::x << endl;
        cout << "value of local x is " << x;
    }
    // In C++ static members must be explicitly defined
    int Test::x = 1;
    int Test::y = 2;

    int main(){
        Test obj;
        int x = 3;
        obj.func(x);
        return 0;
    }
};

//for namespace
#include<iostream>
int main(){
    std::cout << "Hello" << std::endl;
}

//refer to a class inside another class
#include <iostream>
using namespace std;
class outside {
public:
    int x;
    class inside {
    public:
        int x;
        static int y;
        // Take pointer to outer class
        void show(outside* outer) {
            cout << "Outer x = " << outer->x << endl;
            cout << "Inner x = " << x << endl;
        }
    };
};
int outside::inside::y = 5;
int main() {
    outside A;
    A.x = 100;
    outside::inside B;
    B.x = 50;
    B.show(&A);  // pass address of outer object
}

//in case of multiple inheritance
#include<iostream>
using namespace std;
class A{
    protected:
        int x;
    public:
        A() { x = 10; }
};
class B{
    protected:
        int x;
    public:
        B() { x = 20; }
};
class C:public A,public B{
    public:
        void fun(){
            cout << "A's x is " << A::x;  //10
            cout << "\nB's x is " << B::x;  //20
        }
};
int main(){
    C c;
    c.fun();
    return 0;
}
