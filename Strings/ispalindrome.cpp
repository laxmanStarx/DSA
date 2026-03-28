#include<iostream>
using namespace std;

bool isPalindrome(string str){

    int start = 0;
    int end = str.size()-1;

    while(start < end)
    {


        if(str[start] != str[end])
        {
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
    // if(str2 == str){
    //     cout<<"Yes it is palindrome"<<endl;
    //     cout<<str2;
    // }else{
    //     cout<<"it is not plaindrome";
    // }


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
  
   
    if(isPalindrome(str) == true){
        cout<<"yes it is palindrome";
    }else{
        cout<<"no it is not a palindrome";
    }

    return 0;
}