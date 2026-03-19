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

void findMedian(int arr[], int n){

    int medium;

    for(int i = 0;i < n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

            
        }



    }

    int median;
    if(n % 2 !=0){
        median = arr[n / 2];
    }else{
        median = (arr[(n/2) - 1] + arr[n/2]) / 2.0;
    }
    cout<<"Median: " << median << endl;



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
    findMedian(arr, n);



    return 0;

}