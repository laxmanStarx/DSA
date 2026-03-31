#include<bits/stdc++.h>

using namespace std;


void upperlower(string str){
    string result = " ";
    for(int i = 0; i<str.length(); i++){
        if(isupper(str[i])){
            result+=tolower(str[i]);
           
        }else if(islower(str[i])){
            result +=toupper(str[i]);
        }

    }
  
    cout<<result<<" ";
}


int main()

{
    string str = "geeksForgEeks";
    upperlower(str);



    return 0;
}