#include<iostream>
using namespace std;

template <typename T>
T which(T x,T y){
    return (x > y) ? x : y;
}

int main(){
    cout << which<int>(1, 2) << endl;
}
