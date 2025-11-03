// dynamic array - 
#include<iostream>
using namespace std;

int main(){
    int item;
    cout << "Enter the number of items" << endl;
    cin >> item;

    int *it = new int[item];
    cout << "Items: " << endl;

    for (int i = 0; i < item;i++){
        cin >> *(it + i);
    }

    cout << "Display Items: " << endl;
    for (int j = 0; j < item;j++){
        cout << *(it + j) << endl;
    }

    delete it;
    return 0;
}

// dynamic object -
#include<iostream>
using namespace std;

class Test{
    public:
        Test(){
            cout << "Default constructor" << endl;
        }
        void display(){
            cout << "Test display functon" << endl;
        }
};
int main(){
    Test *test = new Test[2];
    for (int i = 0; i < 2;i++){
        cout << i << " Object" << endl;
        (*(test + i)).display();
    }
    return 0;
}
// output- 
// Default constructor
// Default constructor
// Test display functon
// Test display functon

//this pointer -
#include<iostream>
using namespace std;
class Test{
    public:
        int a, b;
        Test(int a,int b){
            (*this).a = a;
            (*this).b = b;
        }
        int add(){
            return (a + b);
        }
};
int main(){
    int sum;
    Test test(1, 2);
    sum = test.add();
    cout << sum << endl;
    return 0;
}