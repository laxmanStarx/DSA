#include<iostream>
#include<climits>

using namespace std;

void smallest(int arr[], int n){

    int min_value = arr[0];
    int second_mini = INT_MAX;

    for(int i = 1; i<n;i++){
        if(min_value > arr[i]){
            min_value = arr[i];
        }
        else if(arr[i] < second_mini && arr[i] != min_value){
            second_mini = arr[i];
        }


    }

    if(second_mini == INT_MAX){
        cout<< "No second smallest element"<< endl;
    }else {
        cout << "Smallest: " << min_value << endl;
        cout << "Second Smallest: " << second_mini << endl;
    }


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