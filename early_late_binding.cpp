#include<iostream>
using namespace std;

class Test1{
    public:
        virtual int  increment(int x){
            cout << "Parent Int function:";
            return (x + 1);
        }
};

class Test2: public Test1{
    public:
        int increament(int x){
            cout << "Child Int Function:";
            return (x + 2);
        }
};

int main(){
    Test1 obj1, *p;
    Test2 obj2;

    p = &obj2;
    cout << p->increment(2) << endl;
}

//by late binding we need to add virtual keyword in base class function.
//output - we go for child function .
//we can access base class function by making the pointer to the parent class.
