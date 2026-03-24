#include<iostream>
#include<climits>
using namespace std;

void second_Max(int arr[], int n){

    int maxVal = arr[0];
    int secondMaax = INT_MIN;

    for(int i = 1; i < n; i++)
    {
        if(maxVal < arr[i]){
            secondMaax = maxVal;
            maxVal = arr[i];
        }
        else if(arr[i] > secondMaax && secondMaax != maxVal){
            secondMaax = arr[i];
        }
    }

    if(secondMaax == INT_MIN){
        cout<<-1;
    }

    cout<< maxVal<< " "<< secondMaax<<endl;




}


int main(){

    int n;

    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    second_Max(arr, n);



    return 0;
}