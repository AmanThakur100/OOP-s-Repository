#include<iostream>
using namespace std;

class Testing {
    int a, b;
    public:
        void setData(int x,int y){
            a = x;
            b = y;
        }

        void display(){
            cout << a << endl;
            cout << b << endl;
        }

        Testing operator+(Testing test){
            Testing temp;
            temp.a = a + test.a;
            temp.b = b + test.b;

            return temp;
        }
};

int main(){
    Testing t1, t2, t3;
    t1.setData(1, 2);
    t2.setData(3, 4);

    t3 = t1 + t2;
    t3.display();
    return 0;
}