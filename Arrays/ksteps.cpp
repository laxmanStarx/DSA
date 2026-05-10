#include<bits/stdc++.h>

using namespace std;

// void rotate(int arr[], int start, int end){

//     while(start < end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }

void rotatedArray(vector<int>& arr, int k)
{

    int n = arr.size();

    // vector<int> v;
    for(int i = k; i < n; i++){
        arr.push_back(arr[i]);
    }
    // for(int i = 0; i < k; i++ ){
    //     v.push_back(arr[i]);
    // }


    for(int i =0; i<n;i++){
        cout<<" "<<arr[i];
    }






}


int main()
{

    vector<int> arr = {2,3,4,5,6,7,8};

    // rotate(arr,7);

    int k;
    cin>>k;

    rotatedArray(arr,k);

    // for(int i =0; i<arr.size();i++){
    //     cout<<" "<<arr[i];
    // }







    return 0;
}
