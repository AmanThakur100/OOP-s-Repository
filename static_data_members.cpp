//They are class members.
//There is only one copy of static data members in the class even if there are many class object out there for the same class .
//This is because static members are shared among all the objects .
//They can accessed without using any object, thats why we call them class members .
//They are declared using static keyword
//Static members must be explicity defined outside the class using scope resolution operator .

//static variable
#include<iostream>
using namespace std;
void demo(){
    static int count = 0;
    cout << count << endl;

    count++;
}
int main(){
    for (int i = 0; i < 5;i++){
        demo();
    }
    return 0;
}
// output - 0 1 2 3 4

//static function
#include<iostream>
using namespace std;
class abc{
    public:
        static void print(){
            cout << "Welcome to GFG" << endl;
        }
};
int main(){
    abc::print();  //without creating object
}

//we cannot access the non-static variable inside static function .
