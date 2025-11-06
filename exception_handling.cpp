#include<iostream>
#include<stdexcept>
using namespace std;

int main(){
    int x=50;
    int y=60;
    double z=0;

    try{
        if(y == 0){
            throw runtime_error("divied by 0\n");
        }
        z = x/y;
    }
    catch(runtime_error& e){
        cout<<"Exception occurred"<<endl<<e.what();
    }
}