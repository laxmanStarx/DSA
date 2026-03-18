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

      
//         for (int j = 0; j < m; j++)
//         {
//             if (b[i] == a[j])
//             {
//                 found = true;
//                 a[j] = -1;
//                 break;
//             }
//         }

     
//         if (!found)
//             return false;
//     }

//     // If all elements are found, return true
//     return true;
// }

// int main()
// {
//     vector<int> a = {11, 1, 13, 21, 3, 7};
//     vector<int> b = {11, 3, 7, 1};

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

#include<iostream>
#include<vector>
using namespace std;

bool findsubset(vector<int> &arr, vector<int> &brr){

    int m = arr.size() ,  n = brr.size();

    for(int i = 0;i<n;i++){
        bool found = false;

        for(int j = 0;j < m;j++){
            if(brr[i] == arr[j]){
                found = true;
                arr[j] = -1;
                break;

            }
        }

        if(!found)
            return false;
        
        
    }
    return true;
}

int main()
{
    vector<int> arr = {11, 1, 13, 21, 3, 7};
    vector<int> brr = {11, 3, 7, 1};

    if (findsubset(arr, brr))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}