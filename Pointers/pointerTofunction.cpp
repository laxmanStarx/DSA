#include<iostream>
using namespace std;

void show(int *p)
{
    *p = 20;
}


int main()
{

    int a = 10;

    show(&a);
    cout<<a;





    return 0;
}