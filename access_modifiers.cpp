#include<iostream>
using namespace std;

class circle1{
    protected:
        double radius;
};

class circle2: public circle1{
    public:
        double compute(double r){
            radius = r;
            return 3.14 * radius * radius;
        }
};

int main(){
    circle2 obj;
    cout << "Using Protected" << endl;
    cout << "Area is: " << obj.compute(1.5) << endl;
    return 0;
}