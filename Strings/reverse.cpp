#include<iostream>
#include<algorithm>
using namespace std;


int main()
{

    string str;
    cin>>str;

    reverse(str.begin(), str.end());

    for(int i = 0; i<str.size(); i ++){
        cout<<str[i]<<" ";
    }






    return 0;
}