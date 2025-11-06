#include<iostream>
#include<fstream>
using namespace std;

//writing in file
void a1(){
    fstream newf;
    newf.open("newfw.txt",ios::out);
    if(!newf){
        cout<<"file is created";
    }
    else {
        cout<<"new file created";
        newf<<"first line\n";
        newf.close();
    }
}

//append in file
void  a2(){
    fstream newf;
    newf.open("newfw.txt", ios::app);
    newf << "data\n";
    newf.close();
}

//reading of data in file
void a3(){
    fstream newf;
    newf.open("newfw.txt", ios::in);
    if(!newf){
        cout << "No such file";
    }
    else {
        char ch;
        while(!newf.eof()){
            newf >> noskipws >> ch;
            cout << ch;
        }
        newf.close();
    }
}

int main(){
    a1();
    a2();
    a3();
}