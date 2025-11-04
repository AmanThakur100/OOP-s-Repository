#include<iostream>
using namespace std;

//calling - child to parent
//execution - parent to child

class A{
    public:
        A(){
            cout << "A consturctor" << endl;
        }
};

class B: public A{
    public:
        B(){
            cout << "B constructor" << endl;
        }
};

int main(){
    B b;
}

// another way parameterized constructor

Class A{
    public:
        A(int x){
            cout << "A constuctor" << endl;
              }
}
;

class B: public A{
    public:
        B(int x,int y):A(x){
            cout << "B constructor" << endl;
        }
};

int main(){
    B b(1, 2);
}

// destructor : calling - child to parent
//              execution - child to parent

class A{
    public:
        ~a(){
            cout << "A destructor" << endl;
        }
};

class B: public A{
    public:
        ~B(){
            cout << "B Destructor" << endl;
        }
};

int main(){
    B b;
}
