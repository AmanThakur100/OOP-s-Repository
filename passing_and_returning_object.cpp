#include<iostream>
using namespace std;

class Example{
    public:
        int a;
        Example add(Example a,Example b){
            Example c;
            c.a = a.a + b.a;
            return c;
        }
};

int main(){
    Example e1, e2, e3;
    e1.a = 50;
    e2.a = 100;
    e3.a = 0;
    e3 = e3.add(e1, e2);
    cout << "Sum" << e3.a << endl;
    return 0;
}