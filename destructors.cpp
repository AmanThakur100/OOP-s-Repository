//Destructor- to release this memory. Uses operator (~) .
// it also should be declared as public and never contain argument .

#include<iostream>
using namespace std;

class Sample{
    private:
        int a;
        int b;

    public:
        Sample(int a,int b){
            this->a = a;
            this->b = b;
        }

        ~Sample(){
            cout << a << endl;
            cout << b << endl;
        }

        int add(){
            return a + b;
        }
};

int main(){
    Sample s(10, 10);
    cout << s.add() << endl;
}


// output- (Flow)
// 20
// 10
// 10