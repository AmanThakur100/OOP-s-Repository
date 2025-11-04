#include<iostream>
using namespace std;

class parent{
    public:
        string parentName;

    void printName(string s){
        cout << s << endl;
    }
};

class child: public parent{
    public:
        string childName;
    
        void printMsg(){
            cout << "This is child printMsg() method" << endl;
        }
};

int main(){
    child obj;
    obj.childName = "aman";

    obj.printMsg();
    obj.printName(obj.childName);
}

// types of inheritance - 
// single
// multiple
// multilevel
// hierarchical 
// hybrid