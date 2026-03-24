#include<iostream>
#include<vector>
using namespace std;

bool  subsetArray(vector<int> &a, vector<int> &b)
{
    int m = a.size();
    int n = b.size();
    // bool find = false;

    for(int i = 0; i < m; i++)
    {
        bool find = true;
        for(int j = 0; j < n; j ++)
        {
            if(a[i] == b[j]){
                find = true;
                   b[j] = -1;

                break;

            }
        }
            if(!find){
        return  false;
    }
    }

    return true;


}

int main()
{

vector<int> b = {11, 1, 13, 21, 3, 7};
vector<int> a = {11,45,97,81};

    if (subsetArray(a, b))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSubset(vector<int> &a, vector<int> &b)
// {

//     // Iterate over each element in the second array
//     int m = a.size(), n = b.size();
//     for (int i = 0; i < n; i++)
//     {
//         bool found = false;

//         // Check if the element exists in the first array
//         for (int j = 0; j < m; j++)
//         {
//             if (b[i] == a[j])
//             {
//                 found = true;
//                 a[j] = -1;
//                 break;
//             }
//         }

//         // If any element is not found, return false
//         if (!found)
//             return false;
//     }

//     // If all elements are found, return true
//     return true;
// }

// int main()
// {
//     vector<int> a = {11, 1, 13, 21, 3, 7};
//     vector<int> b = {11, 3, 56, 1};

//     if (isSubset(a, b))
//     {
//         cout << "true" << endl;
//     }
//     else
//     {
//         cout << "false" << endl;
//     }

//     return 0;
// }