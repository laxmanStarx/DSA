#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string removevowels(string str)
{
    int n = str.length();

    string result = " ";

    for(char c : str)
    {
        if(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A'||c == 'E'||c == 'I' || c == 'O' || c == 'U'))
        {
            result +=c;
        }

    }

    return result;






}

int main()
{

    string str = "helloWorld";

    cout<<removevowels( str);





    return 0;
}