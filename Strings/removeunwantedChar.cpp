#include<bits/stdc++.h>

using namespace std;


void removechar(string str)
{

    string result;


    for(int i = 0; i<str.length(); i++)
    {
        
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <='z' )
        {

            result+=str[i];



        }
    }

    cout<<  result;

}




int main()
{
    string str = "$Gee*k;s..fo, r'Ge^eks?";
    removechar(str);
    return 0;
}