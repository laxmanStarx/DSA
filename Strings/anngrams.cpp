#include<iostream>
using namespace std;
#include<algorithm>
#include<string>


bool annagrams(string str1, string str2)
{

    if(str1.length()!=str2.length())
    {

        return false;

    }

        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        return(str1 == str2);

        
    
}

int main()
{

    string str1;
    cin>>str1;

    string str2;

    cin>>str2;



    if(annagrams(str1, str2)){
        cout<<" these strings are annagram";
    }else{

        cout<<"no they are not annagram";
    }



    return 0;
}