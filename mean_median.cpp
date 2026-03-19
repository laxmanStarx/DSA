#include<iostream>
using namespace std;



void findmean(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){

        sum = sum + arr[i];


    }
    int mean = sum / n;

    cout<< "mean will be "<< mean << endl;



}




int main()

{

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ;i<n;i++){
        cin>> arr[i];
    }
    findmean(arr, n);



    return 0;

}