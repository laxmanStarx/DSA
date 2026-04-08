#include<bits/stdc++.h>
using namespace std;


bool findAnnagram(string str1, string str2){
    if(str1.length()!= str2.length()){
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return (str1 == str2);


}



int main(){

    string str1;

    cin>>str1;

    string str2;

    cin>>str2;

    if(findAnnagram(str1,str2)== true){
        cout<<"Yes"<<" "<<endl;
    }
    else{
        cout<<"No"<<" ";
    }




    return 0;
}