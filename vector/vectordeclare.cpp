#include<iostream>
#include<vector>

using namespace std;

int main()
{


//     vector<int> v1;                 // empty
// vector<int> v2(5);             // size 5, all 0
// vector<int> v3(5, 10);         // size 5, all 10
// vector<int> v4 = {1,2,3,4};    // initializer list
    // vector<int> v;
    vector<int> v1(5);
    vector<int> v2(5,10);
    vector<int> v3 = {1,2,3,4};




    v1.push_back(10);
    v3.push_back(70);
    // v.pop_back();


    // cout<< v1[0];
    // cout<< v.at(0);
    cout<<v3[3];

    v1.front();



    for(int i = 0; i < v3.size(); i++)
    {
        cout<< " " <<v3[i]<<" ";
    }
}

