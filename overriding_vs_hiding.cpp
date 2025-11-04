#include<iostream>
using namespace std;

class Test1{
    public:
        int increment(int x){
            cout << "Parent Int function:";
            return (x + 1);
        }

        int increment(int x,int y){
            cout << "Parent Int function:";
        }
};

class Test2: public Test1{
    public:
        using Test1::increment;

        int increment(int x){
            cout << "Child int function:";
            return (x + 2);
        }
};

int main(){
    Test2 obj2;
    cout << obj2.increment(1, 2) << endl;
}

// child class is overriding the parent class function of same name .