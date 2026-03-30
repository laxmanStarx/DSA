#include<bits/stdc++.h>

using namespace std;


void removechar(string str)
{

    for(int i = 0; i<str.length(); i++)
    {
        if(str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z' )
        {

            str.erase(i, 1);
            i--;

        }
    }

    cout<< str;

}




int main()
{
    string str = "$Gee*k;s..fo, r'Ge^eks?";
    removechar(str);
    return 0;
}