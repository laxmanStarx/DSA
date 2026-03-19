#include<iostream>

using namespace std;

void smallest(int arr[], int n){

    int min_value = arr[0];

    for(int i = 1; i<n;i++){
        if(min_value > arr[i]){
            min_value = arr[i];
        }


    }

    cout << min_value << endl;
    cout << arr[min_value]++ << endl;
}







int main()

{

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ;i<n;i++){
        cin>> arr[i];
    }

    smallest(arr, n);




    return 0;

}