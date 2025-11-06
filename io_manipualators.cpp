#include<ostream>
#include<string>
#include<istream>
#include<sstream>
using namespace std;

//IOS class
void v1(){
    int n = 70;
    cout<<dec<<n<<endl;
    cout<<hex<<n<<endl;

    char a,b,c;
    std::istringstream s(" 123");
    s>>std::skipws>>a>>b>>c;
    cout<<a<<b<<c<<'\n';

    std::istringstream p(" 123");
    p>>std::noskipws>>a>>b>>c;
}

//istream class
void v2(){
    std::istringstream s("    this is a test");
    string line;
    getline(s>>ws,line);
    cout<<line;
}

//ostream class
void v3(){
    cout<<"Fist line, ";
    cout<<"this output is printed on scream"<<endl;
    cout<<"this output is printed on scream"<<ends;
    cout<<"this output is printed on scream"<<flush;
}

//iomanip class
void v4(){
    double f=3.14259;
    cout<<setprecision(5)<<f<<endl;
    cout<<setw(8)<<21<<endl;
}


int main(){
    v1();
    v2();
    v3();
    v4();
}