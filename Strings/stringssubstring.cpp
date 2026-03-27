#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str =  "helloWorld!";
    cout<<str.substr(0,5)<<endl;

    str.push_back('!');
    // s.pop_back();
    cout<<str;



    return 0;
}