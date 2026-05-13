// #include <iostream>
// using namespace std;

// class Test {
//     int x;

// public:
//     Test() {
//         x = 10;
//     }

//     void display()  {
//         x = 20;
//         cout << x;
//     }
//     // void display(){
//     //     cout <<"y";
//     // }
// };

// int main() {
//     Test t;
//     t.display();
// }
















#include <iostream>
using namespace std;

class Base {
public:
    ~Base() {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived Destructor\n";
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;
}










