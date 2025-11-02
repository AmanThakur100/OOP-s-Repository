//Constructor is a special method, which is automatically called when an object of a class is created
// it uses the same name as class name.
// it always public and does not have any return value.

// default , parameterized and copy constructor .

#include<iostream>
using namespace std;

class Sample {
    private:
        int a;
        int b;

    public:
        Sample(int a,int b){
            this->a = a;
            this->b = b;
    }
        int add(){
            return (a + b);
        }
        
        Sample(Sample &old){
            this->a = old.a;
            this->b = old.b;
        }
};

int main(){
    Sample s(10, 20);
    Sample s1(s);
    cout << s1.add() << endl;
    return 0;
}

//copy constructor takes reference or object as argument .
//it is mainly used in operator overloading .
//changement of s do not change the value of s1 indepentend .
