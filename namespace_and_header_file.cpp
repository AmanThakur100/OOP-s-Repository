// #include is used to add header file in your source code.
// Header File  is a collection of declaration of class objects.
// for example - extern ostream cout where ostream is class and cout is object same as istream is a class and cin is object

#include<iostream>
using namespace std;

int main(){
    cout << "Hello world" << endl;
    std::cout << "Hello world" << endl;
}

// cout/cin comes under the std scope
// Namespace - it assign the scope for variable,obj,constructors etc . It helps to identify, variable scope in all namespaces.

namespace std1{
    int x = 10;
}
namespace std2 {
    int x = 15;
}

int main(){
    std::cout << "My first program" << endl; 
    std::cout << "x" << std1::x << std::endl; //10
    return 0;
}