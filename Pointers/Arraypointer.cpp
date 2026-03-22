#include<iostream>

using namespace std;

int main()
{

    // int arr[] = {1,2,3,4,5};
    // cout<<arr<<" "<<endl;
    // cout<<*arr<< " "<<endl;
    // cout<<*(arr + 1)<<" ";

    int arr[4] = {10,20,90,80};
    int *p = arr;

    cout<<*p<<endl;
    cout<<"hello"<<endl;
    cout<<*(p+1)<<endl;

    return 0;
}