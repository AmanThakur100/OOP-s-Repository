#include<iostream>
using namespace std;

class Test1{
    int a;
    public:
        void getA(){
            cin >> a;
        }
        friend void operator>(Test1, Test2);
};

class Test2{
    int b;
    public:
        void getB(){
            cin >> b;
        }
        friend void operator>(Test1, Test2);
};

void operator>(Test1 t1,Test2 t2){
    (t1.a > t2.b) ? cout << "a is greater" : cout << "b is greater" << endl;
}

int main(){
    Test1 t1;
    Test2 t2;

    t1.getA();
    t2.getB();

    t1 > t2;
    return 0;
}