#include<iostream>
using namespace std;

// any class is called abstract class, if it contains atleast one pure virtual function.sometime we don't know the implementation of some function, so we can declare them or leave them in base class without defining them.

class Test1
{
public:
    // pure virtual function
    virtual int increament(int x) = 0;

    void printfMsg()
    {
        cout << "This is a Abstract class as it contains at least 1 pure virtual function" << endl;
    }
};

class Test2: public Test1{
    public:
        int increament(int x){
            cout << "Child Int Function" << endl;
            return (x + 2);
        }
};

int main(){
    Test2 obj2;
    cout << obj2.increament(2) << endl;

    Test1 *p = new Test2();
    p->printfMsg();

    return 0;
}