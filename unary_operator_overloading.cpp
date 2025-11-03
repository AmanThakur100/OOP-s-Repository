#include<iostream>
using namespace std;

class Testing{
    int a, b;
    public:
        void setData(int x,int y){
            a = x;
            b = y;
        }
        Testing operator++(){
            Testing test;
            test.a = ++a;
            test.b = ++b;

            return test;
        }

        void display(){
            cout << a << endl;
            cout << b << endl;
        }
};

int main(){
    Testing t1, t2, t3;
    t1.setData(1, 2);
    t2.setData(3, 4);

    t3 = ++t1;      // unary operator overloading for pre ++ increament operator
    t3.display();
    return 0;
}