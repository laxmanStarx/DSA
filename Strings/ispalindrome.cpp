#include<iostream>
using namespace std;

bool isPalindrome(string str){

    int start = 0;
    int end = str.size()-1;

    while(start < end)
    {


        if(str[start] == str[end]){

        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        return true;

        cout<<"hello world";

        }else{
            return false;
        }



        
  

        start++;
        end--;
    }

    return true;

    // for(int i = 0; i<str.size(); i++)
    // {
    //     str2.push_back(str[i]);

    // }

    // if(str[start] == str2[end])
    // {


    //     return true;
    // }
    // else{
    //     return false;
    // }



    }







int main(){

    string str;
    cin>>str;
    string str2;
    if(str == str2){
        cout<<isPalindrome(str);
    }else{
        cout<<"it is not palindrome";
    }
    return 0;
}