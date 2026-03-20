#include<iostream>
#include<climits>
using namespace std;



void FindLargest(int arr[], int n){

    int largest_value = arr[0];
    int second_largest = INT_MIN;

    for(int i = 1;i<n;i++){
        if(arr[i] > largest_value){
            largest_value = arr[i];
        }
        else if(arr[i] > second_largest && arr[i]!= largest_value){
            second_largest = arr[i];
        }
    }

    if(second_largest == INT_MIN){

        cout<< "Sorry there is no second largest element"<<endl;
    }else{
        cout<<largest_value<<endl;
        cout<<second_largest<<endl;
    }
}























int main(){

    int n;
    cin>> n;

    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    FindLargest(arr, n);







    return 0;
}