#include<iostream>

using namespace std;

int equilibrium(int arr[], int n){

    int totalSum = 0;

    for(int i = 0; i< n; i++){
        totalSum += arr[i];
    }

    int leftSum = 0;

    for(int j = 0; j<n ; j++){
        int rightSum = totalSum - leftSum - arr[j];
        if(leftSum == rightSum){
            return j;
        }
        leftSum += arr[j];
    }

    return -1;



}

int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};

    // if(equilibrium(arr , 7) == true){
    //     cout<<"it is equilibrium"<<endl;
    // }else{
    //     cout<<"It is not an equilibrium"<<endl;
    // }
    cout<<equilibrium(arr, 7)<<endl;



    return 0;
}