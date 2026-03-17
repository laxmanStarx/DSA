// #include<iostream>
// #include<vector>
// using namespace std;


// int findequvilibrium(vector<int>& arr, int n){
//     n = arr.size();
//     for(int i = 0;i<n;i++){

//         //left sum

//         int leftSum = 0;

//         for(int j =0;j<i;j++){
//             leftSum += arr[j];
            
//         }

//         //right sum

//         int rightSum = 0;

//         for(int j = i+1;j<arr.size(); j++ ){
//             rightSum +=arr[j];



//         }

        
//             if(leftSum == rightSum){
//                 return i;
//             }

            






//     }

//     return -1;
// }


// int main(){

//     vector<int> arr = {-7,1,5,2,-4,3,0};

//     cout<< findequvilibrium(arr,7);


//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int findequvilibrium(vector<int>& arr , int n)
{
      n = arr.size();
    for(int i =0; i< n;i++){

        int leftSum = 0;
        for(int j = 0; j < i;j++){
            leftSum += arr[j];

        }

        int rightSum = 0;
        for(int j = i+1 ;j < arr.size();j++){
            rightSum += arr[j];
        }

        if(leftSum == rightSum){
            return i;
        }
    }
    return -1;
}

int main()
{

vector<int> arr = {-7,1,5,2,-4,3,0};

    cout<<findequvilibrium(arr ,7)<<" ";



  return 0;
}