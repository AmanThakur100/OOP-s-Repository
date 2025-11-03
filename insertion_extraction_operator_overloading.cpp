#include<iostream>
using namespace std;

class Distance {
    private:
        int feet;
        int inches;

    public:
        friend void operator>>(istream &input, Distance &D){
            input >> D.feet >> D.inches;
        }

        friend void operator<<(ostream &output, const Distance &D){
            output << "Feet : " << D.feet << " Inches : " << D.inches;
        }
};

int main(){
    Distance d;
    cin >> d;
    cout << d;
    return 0;
}