#include<iostream>

using namespace std;


int main()
{
    int arr[2][3] = {{20,30},{50,60,80}};

    // int *p = arr;

    cout<<*(*(arr+1) + 2)<<endl;


    return 0;
}