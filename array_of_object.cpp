#include<iostream>
using namespace std;

class Student{
    string name;
    int marks;
    public:
        void getName(){
            cin >> name;
        }
        void getMarks(){
            cin >> marks;
        }
        void display(){
            cout << name << endl;
            cout << marks << endl;
        }
};

int main(){
    Student st[3];
    for (int i = 0; i < 3;i++){
        cout << "Enter name" << endl;
        st[i].getName();
        cout << "Enter the marks" << endl;
        st[i].getMarks();
    }
    for (int i = 0; i < 3;i++){
        cout << "Student" << i + 1 << endl;
        st[i].display();
    }
    return 0;
}