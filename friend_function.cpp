//Friend function - It has rights to access all members of the class, even private members as well.
// they are not member function.
// it is defined outside the class.
// use friend keyword followed by the function prototype.

#include<iostream>
using namespace std;

class Box{
    double width;
    public:
        friend void print(Box box);
        void setWidth(double wid);
};

void Box::setWidth(double wid){
    width = wid;
}

void print(Box box){
    cout << "Width of box " << box.width << endl;
}

int main(){
    Box box;
    box.setWidth(10.0);
    print(box);
    return 0;
}

//output - Width of box 10.0
