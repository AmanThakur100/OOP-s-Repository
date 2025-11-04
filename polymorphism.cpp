#include<iostream>
using namespace std;

class Test1{
    public:
        int increament(int x){
            cout << "Parent int function:" << endl;
            return (x + 1);
        }

        float increament(float x){
            cout << "Parent float function:" << endl;
            return (x + .1);
        }
};

class Test2: public Test1{
    public:
        int increament(int x){
            cout << "Child Int function:" << endl;
            return (x + 1);
        }

        float increament(float x){
            cout << "Child float function:" << endl;
            return (x + .2);
        }
};

int main(){
    Test1 obj1;
    Test2 obj2;

    cout << obj1.increament(1) << endl;
    cout << obj2.increament(1.2f) << endl;

    cout << endl;

    cout << obj2.increament(1) << endl;
    cout << obj2.increament(1.2f) << endl;

    return 0;
}