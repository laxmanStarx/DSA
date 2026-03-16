// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> leftRotate(vector<int> &arr, int d)
// {
//     int n = arr.size();
//     d = d % n;

//     vector<int> result;

//     // elements from d to end
//     for(int i = d; i < n; i++)
//     {
//         result.push_back(arr[i]);
//     }

//     // first d elements
//     for(int i = 0; i < d; i++)
//     {
//         result.push_back(arr[i]);
//     }

//     return result;
// }

// int main()
// {
//     vector<int> arr = {1,2,3,4,5,6};
//     int d = 2;

//     vector<int> rotated = leftRotate(arr, d);

//     for(int x : rotated)
//         cout << x << " ";

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;




 vector<int> rotateArray(vector<int>&arr, int d){

    int n = arr.size();
    d = d%n;

    vector<int> result;

     // elements from d to end
    for(int i = d;i< n;i++){
        result.push_back(arr[i]);
    }

       // first d elements
    for(int i = 0; i< d; i++){
        result.push_back(arr[i]);
    }

      return result;





}



int main()

{

    vector<int> arr = {8,9,60,4,5};
    int d = 2;
    vector<int> rotated = rotateArray(arr , d);

    for(int x : rotated )
          cout<< x << " ";




          return 0;



}