#include<iostream>

using namespace std;



class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0; 
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};