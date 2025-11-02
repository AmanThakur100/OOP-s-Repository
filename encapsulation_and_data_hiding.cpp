//Encapsulation- An act of combining properties and method, related to same object .
// by making all data members private and creating public get and set function in such a way that set functions  set the value of data members and get function, get the value of that data members .
//Data hiding- using private access modifier .

#include<iostream>
using namespace std;

class Student {
    private:
        int rollno;
        string name;

    public:
        // Setter methods
        void setRollNo(int r){
            rollno = r;
        }
        void setName(string n){
            name = n;
        }

        // Getter methods
        int getRollNo(){
            return rollno;
        }
        string getName(){
            return name;
        }
};

int main(){
    Student s;
    s.setRollNo(101);
    s.setName("Aman");
    cout << s.getRollNo() << endl;
    cout << s.getName() << endl;
    return 0;
}