#include<bits/stdc++.h>
using namespace std;


bool isAnagrams(string str1, string str2)
{

    int n = str1.length();
    int m =  str2.length();


if(str1.length() != str2.length()){
    return false;
}

sort(str1.begin(), str1.end());
sort(str2.begin(), str2.end());

return(str1 == str2);



};

int main()
{
    string str1 = "silent";
    string str2 = "listen";

    if(isAnagrams(str1, str2) == true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}