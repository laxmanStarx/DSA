#include<iostream>

using namespace std;

// bool isPalindrome()

int fun() {
    static int x = 0;
    x++;
    return x;
}




int main(){

// int x = 1;
// cout << (x == 1 || x++ == 2);
// cout << x;

// cpp
// cout << sizeof('A');


 cout << fun() << " ";
    // cout << fun();
}