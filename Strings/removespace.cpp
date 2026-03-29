// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// string removespaces(string str)
// {
//     str.erase(remove_if(str.begin(), str.end(), [](char c) {
//         return c == ' ';
//     }), str.end());

//     return str;
// }

// int main ()
// {
//     string str;

//     getline(cin, str);   // take full line (important for spaces)

//     cout << removespaces(str);

//     return 0;
// }


#include<iostream>
using namespace std;


 string removespaces(string str){
    int n = str.length();
    int j = 0;
    for(int i = 0; i < n; i++)
    {

        if(str[i]!=  ' '){
            str[j++] =  str[i];
        }
    }

    return str.substr(0, j);
}

int main()
{
    string str = "hello world v a i bh av";
    cout<<removespaces(string(str));


    return 0;
}


