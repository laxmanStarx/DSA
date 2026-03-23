#include<iostream>

using namespace std;

void update(int *p, int *q){

    *p = 20;

     *q = 80;
}

int main()
{
    int a = 10;
    int b = 90;
    update(&a, &b);
    
    cout<<a<<b;
}


// void update(int &p) {
//     p = 20;
// }

// int main() {
//     int a = 10;
//     update(a);
//     cout << a; // 20
// }